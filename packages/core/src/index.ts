import { parse } from "@bokunoscript/parser";
import { transform } from "@bokunoscript/transformer";
import { writeFileSync } from "fs";

compile(`"foo".bar(1)`);

export function compile(sourceCode: string) {
  const tree = parse(sourceCode);

  const output = transform(tree);

  writeFileSync("dist.js", output);
}
