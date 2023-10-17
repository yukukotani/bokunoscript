const STD_LIB = `
function println(s) { console.log(s); }
`.trim();

export function appendStdLib(code: string) {
  return `${STD_LIB}\n\n${code}`;
}
