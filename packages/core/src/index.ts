import { parse } from "@bokunoscript/parser";
import { transpile } from "@bokunoscript/transpiler";
import { writeFileSync } from "fs";

compile(`{ 1: "foo", 3: 4 }`);

export function compile(sourceCode: string) {
  const tree = parse(sourceCode);
  const output = transpile(tree);

  writeFileSync("dist.js", output);
}
