// Generate types for grammar.js
// Allows autocomplete, go to implementation and navigation to symbol

const fs = require('fs');

function writeTypes() {
  console.log('Generating types...');

  const startTime = performance.now();

  const source = fs.readFileSync('grammar.js', 'utf8');
  const writer = fs.createWriteStream('grammar.d.ts', 'utf8');

  function grammar(g) {
    writer.write('declare interface IRules {\n');

    for (const k in g.rules) {
      writer.write(`  ${k}: ($: IRules) => any;\n`);
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
  extras?: ($: IRules) => any;
  inline?: ($: IRules) => any;
  conflicts?: ($: IRules) => any;
  externals?: ($: IRules) => any;
  word?: ($: IRules) => any;
  supertypes?: ($: IRules) => any;
  precedences?: ($: IRules) => any;
  rules: IRules;
}

declare function grammar(g: IGrammar): any;

declare type TRule = (($: IRules) => any) | string | RegExp;

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
