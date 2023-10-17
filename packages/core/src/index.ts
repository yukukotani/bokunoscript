import { parse } from "@bokunoscript/parser";
import { transform } from "@bokunoscript/transformer";
import { writeFileSync, readFileSync } from "fs";

const file = readFileSync("input.bs");

compile(String(file));

export function compile(sourceCode: string) {
  const tree = parse(sourceCode);

  const output = transform(tree);

  writeFileSync("output.js", output);

  console.log("Compiled!");
}
