import language from "tree-sitter-bokunoscript";
import TreeSitterParser, { SyntaxNode } from "tree-sitter";
import {
  BinaryExpression,
  Expression,
  File,
  NumberLiteral,
  ObjectExpression,
  ObjectProperty,
  Statement,
  StringLiteral,
  UnaryExpression,
} from "./ast";

export function parse(sourceCode: string) {
  const tree = generateCST(sourceCode);

  return parseFile(tree.rootNode);
}

function parseFile(node: SyntaxNode): File {
  const statements = node.children.map(parseStatement);
  return {
    type: "File",
    statements,
  };
}

function parseStatement(node: SyntaxNode): Statement {
  return parseExpression(node);
}

function parseExpression(node: SyntaxNode): Expression {
  switch (node.type) {
    case "unary_expression": {
      return parseUnaryExpression(node);
    }
    case "binary_expression": {
      return parseBinaryExpression(node);
    }
    case "object_expression": {
      return parseObjectExpression(node);
    }
    case "number": {
      return parseNumberLiteral(node);
    }
    case "string": {
      return parseStringLiteral(node);
    }
  }

  throw new Error(`Unexpected node type: ${node.type}`);
}

function parseUnaryExpression(node: SyntaxNode): UnaryExpression {
  const opNode = node.child(0);
  if (!opNode) {
    throw new Error("No opNode");
  }
  if (opNode.text !== "+" && opNode.text !== "-") {
    throw new Error(`Unexpected op: ${opNode.text}`);
  }
  const exprNode = node.child(1);
  if (!exprNode) {
    throw new Error("No exprNode");
  }

  return {
    type: "UnaryExpression",
    operator: opNode.text,
    expression: parseExpression(exprNode),
  };
}

function parseBinaryExpression(node: SyntaxNode): BinaryExpression {
  const opNode = node.child(1);
  if (!opNode) {
    throw new Error("No opNode");
  }
  if (opNode.text !== "+" && opNode.text !== "-") {
    throw new Error(`Unexpected op: ${opNode.text}`);
  }
  const leftNode = node.child(0);
  if (!leftNode) {
    throw new Error("No leftNode");
  }
  const rightNode = node.child(2);
  if (!rightNode) {
    throw new Error("No rightNode");
  }

  return {
    type: "BinaryExpression",
    operator: opNode.text,
    left: parseExpression(leftNode),
    right: parseExpression(rightNode),
  };
}
function parseObjectExpression(node: SyntaxNode): ObjectExpression {
  const properties: ObjectProperty[] =
    node.namedChildren.map(parseObjectProperty);
  return {
    type: "ObjectExpression",
    properties,
  };
}
function parseObjectProperty(node: SyntaxNode): ObjectProperty {
  const keyNode = getNamedChild(node, 0);
  const valueNode = getNamedChild(node, 1);
  return {
    type: "ObjectProperty",
    key: parseNumberLiteral(keyNode),
    value: parseExpression(valueNode),
  };
}

function parseNumberLiteral(node: SyntaxNode): NumberLiteral {
  return {
    type: "NumberLiteral",
    value: Number(node.text),
  };
}

function parseStringLiteral(node: SyntaxNode): StringLiteral {
  return {
    type: "StringLiteral",
    value: node.firstNamedChild!.text,
  };
}

function getChild(node: SyntaxNode, index: number) {
  const child = node.child(index);
  if (!child) {
    throw new Error("Child node not found");
  }

  return child;
}
function getNamedChild(node: SyntaxNode, index: number) {
  const child = node.namedChild(index);
  if (!child) {
    throw new Error("Child node not found");
  }

  return child;
}

function generateCST(sourceCode: string) {
  const parser = new TreeSitterParser();
  parser.setLanguage(language);

  const tree = parser.parse(sourceCode);
  return tree;
}

parse("5 + 1");
