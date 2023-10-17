import { parse } from "@bokunoscript/parser";
import { transform } from "@bokunoscript/transformer";
import { writeFileSync, readFileSync } from "fs";
import * as path from "path";

const file = readFileSync(path.join(__dirname, "../input.bs"));

compile(String(file));

export function compile(sourceCode: string) {
  const tree = parse(sourceCode);

  const output = transform(tree);

  writeFileSync(path.join(__dirname, "../dist.js"), output);

  console.log("Compiled!");
}
