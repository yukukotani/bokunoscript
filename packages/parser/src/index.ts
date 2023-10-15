import language from "tree-sitter-bokunoscript";
import TreeSitterParser from "tree-sitter";

export function parse(sourceCode: string) {
  parseCST(sourceCode);
}

function parseCST(sourceCode: string) {
  const parser = new TreeSitterParser();
  parser.setLanguage(language);

  const tree = parser.parse(sourceCode);
  console.log(tree);
}

parse("5 + 1");
