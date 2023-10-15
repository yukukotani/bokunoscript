import type {
  BinaryExpression,
  Expression,
  File,
  NumberLiteral,
  ObjectExpression,
  Statement,
  UnaryExpression,
} from "@bokunoscript/parser";
import * as swc from "@swc/core";

export function transpile(node: File): string {
  const program = transpileFile(node);
  return swc.printSync(program).code;
}

function transpileFile(node: File): swc.Program {
  return {
    type: "Module",
    interpreter: "",
    span: span(),
    body: node.statements.map(transpileStatement),
  };
}
function transpileStatement(node: Statement): swc.Statement {
  return {
    type: "ExpressionStatement",
    span: span(),
    expression: transpileExpression(node),
  };
}
function transpileExpression(node: Expression): swc.Expression {
  switch (node.type) {
    case "UnaryExpression": {
      return transpileUnaryExpression(node);
    }
    case "BinaryExpression": {
      return transpileBinaryExpression(node);
    }
    case "ObjectExpression": {
      return transpileObjectExpression(node);
    }
    case "NumberLiteral": {
      return transpileNumberLiteral(node);
    }
  }
}
function transpileUnaryExpression(node: UnaryExpression): swc.UnaryExpression {
  return {
    type: "UnaryExpression",
    span: span(),
    operator: node.operator,
    argument: transpileExpression(node.expression),
  };
}
function transpileBinaryExpression(
  node: BinaryExpression
): swc.BinaryExpression {
  return {
    type: "BinaryExpression",
    span: span(),
    operator: node.operator,
    left: transpileExpression(node.left),
    right: transpileExpression(node.right),
  };
}
function transpileObjectExpression(
  node: ObjectExpression
): swc.ParenthesisExpression {
  const expr: swc.ObjectExpression = {
    type: "ObjectExpression",
    span: span(),
    properties: node.properties.map((prop) => ({
      type: "KeyValueProperty",
      key: transpileNumberLiteral(prop.key),
      value: transpileExpression(prop.value),
    })),
  };

  // wrap by parens
  return {
    type: "ParenthesisExpression",
    span: span(),
    expression: expr,
  };
}
function transpileNumberLiteral(node: NumberLiteral): swc.NumericLiteral {
  return {
    type: "NumericLiteral",
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
