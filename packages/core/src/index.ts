import { parse } from "@bokunoscript/parser";
import { transform } from "@bokunoscript/transformer";
import { writeFileSync } from "fs";

compile(`fun foo {
  {  "foo": 2 }
}
val bar = 2
`);

export function compile(sourceCode: string) {
  const tree = parse(sourceCode);

  const output = transform(tree);

  writeFileSync("dist.js", output);
}
