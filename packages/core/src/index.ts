import { parse } from "@bokunoscript/parser";
import { transform } from "@bokunoscript/transformer";
import { writeFileSync } from "fs";

compile(`fun foo {
  {  "foo": 2 }
}
val bar = 2
"2".length
`);

export function compile(sourceCode: string) {
  const tree = parse(sourceCode);

  const output = transform(tree);

  writeFileSync("dist.js", output);
}
