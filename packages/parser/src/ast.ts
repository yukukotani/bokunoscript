export type File = {
  type: "File";
  statements: readonly Statement[];
};

export type Statement = Expression;

export type Expression = UnaryExpression | BinaryExpression | Literal;
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

export type Literal = NumberLiteral;
export type NumberLiteral = {
  type: "NumberLiteral";
  value: number;
};
