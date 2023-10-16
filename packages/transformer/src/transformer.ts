import type {
  BinaryExpression,
  Expression,
  File,
  Literal,
  NumberLiteral,
  ObjectExpression,
  Statement,
  StringLiteral,
  UnaryExpression,
} from "@bokunoscript/parser";
import * as swc from "@swc/core";

export function transform(node: File): string {
  const program = transformFile(node);
  return swc.printSync(program).code;
}

function transformFile(node: File): swc.Program {
  return {
    type: "Module",
    interpreter: "",
    span: span(),
    body: node.statements.map(transformStatement),
  };
}
function transformStatement(node: Statement): swc.Statement {
  return {
    type: "ExpressionStatement",
    span: span(),
    expression: transformExpression(node),
  };
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

function span() {
  return {
    ctxt: 0,
    start: 0,
    end: 0,
  };
}
