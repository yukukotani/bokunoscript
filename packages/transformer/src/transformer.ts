import type {
  BinaryExpression,
  CallExpression,
  Expression,
  File,
  FunctionDeclaration,
  Identifier,
  Literal,
  MemberExpression,
  NumberLiteral,
  ObjectExpression,
  Statement,
  StringLiteral,
  UnaryExpression,
  VariableDeclaration,
} from "@bokunoscript/parser";
import * as swc from "@swc/core";
import { appendStdLib } from "./stdlib";

export function transform(node: File): string {
  const program = transformFile(node);
  const code = swc.printSync(program).code;
  return appendStdLib(code);
}

function transformFile(node: File): swc.Program {
  return {
    type: "Module",
    interpreter: null!,
    span: span(),
    body: node.statements.map(transformStatement),
  };
}
function transformStatement(node: Statement): swc.Statement {
  switch (node.type) {
    case "FunctionDeclaration": {
      return transformFunctionDeclaration(node);
    }
    case "VariableDeclaration": {
      return transformVariableDeclaration(node);
    }
    case "ExpressionStatement": {
      return {
        type: "ExpressionStatement",
        span: span(),
        expression: transformExpression(node.expression),
      };
    }
  }
}
function transformExpression(node: Expression): swc.Expression {
  switch (node.type) {
    case "UnaryExpression": {
      return transformUnaryExpression(node);
    }
    case "BinaryExpression": {
      return transformBinaryExpression(node);
    }
    case "ObjectExpression": {
      return transformObjectExpression(node);
    }
    case "MemberExpression": {
      return transformMemberExpression(node);
    }
    case "CallExpression": {
      return transformCallExpression(node);
    }
    case "Identifier": {
      return transformIdentifier(node);
    }
    case "NumberLiteral": {
      return transformNumberLiteral(node);
    }
    case "StringLiteral": {
      return transformStringLiteral(node);
    }
  }
}
function transformUnaryExpression(node: UnaryExpression): swc.UnaryExpression {
  return {
    type: "UnaryExpression",
    span: span(),
    operator: node.operator,
    argument: transformExpression(node.expression),
  };
}
function transformBinaryExpression(
  node: BinaryExpression
): swc.BinaryExpression {
  return {
    type: "BinaryExpression",
    span: span(),
    operator: node.operator,
    left: transformExpression(node.left),
    right: transformExpression(node.right),
  };
}
function transformObjectExpression(
  node: ObjectExpression
): swc.ParenthesisExpression {
  const expr: swc.ObjectExpression = {
    type: "ObjectExpression",
    span: span(),
    properties: node.properties.map((prop) => ({
      type: "KeyValueProperty",
      key: transformPropertyKey(prop.key),
      value: transformExpression(prop.value),
    })),
  };

  // wrap by parens
  return {
    type: "ParenthesisExpression",
    span: span(),
    expression: expr,
  };
}
function transformPropertyKey(node: Literal): swc.PropertyName {
  switch (node.type) {
    case "NumberLiteral": {
      return transformNumberLiteral(node);
    }
    case "StringLiteral": {
      return transformStringLiteral(node);
    }
  }
}
function transformMemberExpression(
  node: MemberExpression
): swc.MemberExpression {
  return {
    type: "MemberExpression",
    span: span(),
    object: transformExpression(node.object),
    property: transformIdentifier(node.property),
  };
}
function transformCallExpression(node: CallExpression): swc.CallExpression {
  const args = node.arguments.map((e) => ({
    expression: transformExpression(e),
  }));
  if (node.receiver) {
    args.push({
      expression: transformExpression(node.receiver),
    });
  }
  return {
    type: "CallExpression",
    span: span(),
    callee: transformIdentifier(node.function),
    arguments: args,
  };
}
function transformNumberLiteral(node: NumberLiteral): swc.NumericLiteral {
  return {
    type: "NumericLiteral",
    span: span(),
    value: node.value,
  };
}
function transformStringLiteral(node: StringLiteral): swc.StringLiteral {
  return {
    type: "StringLiteral",
    span: span(),
    value: node.value,
  };
}

function transformFunctionDeclaration(
  node: FunctionDeclaration
): swc.FunctionDeclaration {
  return {
    type: "FunctionDeclaration",
    span: span(),
    async: false,
    declare: false,
    generator: false,
    body: {
      type: "BlockStatement",
      span: span(),
      stmts: node.statements.map(transformStatement),
    },
    identifier: transformIdentifier(node.name),
    params: [
      ...node.parameters.map(
        (p) =>
          ({
            type: "Parameter",
            span: span(),
            pat: transformIdentifier(p),
          }) as const
      ),
      {
        type: "Parameter",
        span: span(),
        pat: {
          type: "Identifier",
          span: span(),
          optional: false,
          value: "_this",
        },
      },
    ],
  };
}

function transformVariableDeclaration(
  node: VariableDeclaration
): swc.VariableDeclaration {
  return {
    type: "VariableDeclaration",
    span: span(),
    declare: false,
    kind: "const",
    declarations: [
      {
        type: "VariableDeclarator",
        span: span(),
        definite: false,
        id: transformIdentifier(node.name),
        init: transformExpression(node.expression),
      },
    ],
  };
}

function transformIdentifier(node: Identifier): swc.Identifier {
  const value = node.name === "this" ? "_this" : node.name;
  return {
    type: "Identifier",
    span: span(),
    optional: false,
    value: value,
  };
}

function span() {
  return {
    ctxt: 0,
    start: 0,
    end: 0,
  };
}
