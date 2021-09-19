// Generate types for grammar.js
// Allows autocomplete, go to implementation and navigation to symbol

const fs = require('fs');

function writeTypes() {
  console.log('Generating types...');

  const startTime = performance.now();

  const source = fs.readFileSync('grammar.js', 'utf8');
  const writer = fs.createWriteStream('grammar.d.ts', 'utf8');

  function grammar(g) {
    // Externals
    writer.write('declare interface IExternals {\n');

    const m = g?.externals?.toString()?.match(/\(?\$\)? => \[(.*)\]/);

    if (m?.[1]) {
      const extRules = m[1].replace(/\s/g, '').replace(/\$\./g, '').split(',');

      for (const r of extRules) {
        writer.write(`  ${r}: ($: IExternals) => any;\n`);
      }
    }

    writer.write('}\n\n');

    // Rules
    writer.write('declare interface IRules {\n');

    for (const k in g.rules) {
      writer.write(`  ${k}: ($: IRules & IExternals) => any;\n`);
    }

    writer.write('}\n\n');
  }

  try {
    eval(source);
  } catch (err) {
    console.error(err);
    return;
  }

  const furtherDefinitions = `
declare interface IGrammar {
  name: string;
  extras?: ($: IRules & IExternals) => any;
  inline?: ($: IRules & IExternals) => any;
  conflicts?: ($: IRules & IExternals) => any;
  externals?: ($: IExternals) => any;
  word?: ($: IRules & IExternals) => any;
  supertypes?: ($: IRules & IExternals) => any;
  precedences?: ($: IRules & IExternals) => any;
  rules: IRules;
}

declare function grammar(g: IGrammar): any;

declare type TRule = (($: IRules & IExternals) => any) | string | RegExp;

declare interface IPrecFunc {
  (rule: TRule): TRule;
  (val: number | string, rule: TRule): TRule;
}

declare interface ITokenFunc {
  (rule: TRule): TRule;
}

declare function seq(...rules: TRule[]): TRule;
declare function choice(...rules: TRule[]): TRule;
declare function repeat(rule: TRule): TRule;
declare function repeat1(rule: TRule): TRule;
declare function optional(rule: TRule): TRule;
declare function alias(rule: TRule, name: TRule): TRule;
declare function field(name: string, rule: TRule): TRule;
declare const prec: IPrecFunc & {
  left: IPrecFunc;
  right: IPrecFunc;
  dynamic: (val: number, rule: TRule) => TRule;
};
declare const token: ITokenFunc & { immediate: ITokenFunc }
`;

  writer.write(furtherDefinitions);
  writer.close();

  const endTime = performance.now() - startTime;
  console.log(`Done: ${endTime.toFixed(3)}s`);
}

if (!fs.existsSync('grammar.d.ts')) writeTypes();

fs.watchFile('grammar.js', writeTypes);
