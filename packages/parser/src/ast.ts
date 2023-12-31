export type File = {
  type: "File";
  statements: readonly Statement[];
};

export type Statement =
  | ExpressionStatement
  | FunctionDeclaration
  | VariableDeclaration;
export type ExpressionStatement = {
  type: "ExpressionStatement";
  expression: Expression;
};

export type Expression =
  | UnaryExpression
  | BinaryExpression
  | ObjectExpression
  | MemberExpression
  | CallExpression
  | Identifier
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
export type ObjectPropertyKey = NumberLiteral | StringLiteral;

export type MemberExpression = {
  type: "MemberExpression";
  object: Expression;
  property: Identifier;
};
export type CallExpression = {
  type: "CallExpression";
  receiver: Expression | null;
  function: Identifier;
  arguments: readonly Expression[];
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
  parameters: readonly Identifier[];
  statements: readonly Statement[];
};

export type VariableDeclaration = {
  type: "VariableDeclaration";
  name: Identifier;
  expression: Expression;
};

export type Identifier = {
  type: "Identifier";
  name: string;
};
