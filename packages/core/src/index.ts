import { parse } from "@bokunoscript/parser";
import { transform } from "@bokunoscript/transformer";
import { writeFileSync } from "fs";

compile(`
fun foo {
  1
}

{ 1: "aa",
 3: 4 }
1
3

`);

export function compile(sourceCode: string) {
  const tree = parse(sourceCode);
  const output = transform(tree);

  writeFileSync("dist.js", output);
}
