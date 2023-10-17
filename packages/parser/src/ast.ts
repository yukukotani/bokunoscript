export type File = {
  type: "File";
  statements: readonly Statement[];
};

export type Statement = ExpressionStatement | FunctionDeclaration;
export type ExpressionStatement = {
  type: "ExpressionStatement";
  expression: Expression;
};

export type Expression =
  | UnaryExpression
  | BinaryExpression
  | ObjectExpression
  | Literal;
export type UnaryExpression = {
  type: "UnaryExpression";
  operator: "+" | "-";
  expression: Expression;
};
export type BinaryExpression = {
  type: "BinaryExpression";
  operator: "+" | "-" | "*" | "/";
  left: Expression;
  right: Expression;
};
export type ParenthesizedExpression = {
  type: "ParenthesizedExpression";
};
export type ObjectExpression = {
  type: "ObjectExpression";
  properties: readonly ObjectProperty[];
};
export type ObjectProperty = {
  type: "ObjectProperty";
  key: Literal;
  value: Expression;
};

export type Literal = NumberLiteral | StringLiteral;
export type NumberLiteral = {
  type: "NumberLiteral";
  value: number;
};
export type StringLiteral = {
  type: "StringLiteral";
  value: string;
};

export type FunctionDeclaration = {
  type: "FunctionDeclaration";
  name: Identifier;
  statements: readonly Statement[];
};

export type Identifier = {
  type: "Identifier";
  name: string;
};
