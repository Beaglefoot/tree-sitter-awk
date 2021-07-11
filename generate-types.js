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

  eval(source);

  const furtherDefinitions = `
declare interface IGrammar {
  name: string;
  extras?: ($: IRules) => any;
  inline?: ($: IRules) => any;
  conflicts?: ($: IRules) => any;
  externals?: ($: IRules) => any;
  word?: ($: IRules) => any;
  supertypes?: ($: IRules) => any;
  rules: IRules;
}

declare function grammar(g: IGrammar): any;

declare type TRule = (($: IRules) => any) | string | RegExp;

declare function seq(...rules: TRule[]): TRule;
declare function choice(...rules: TRule[]): TRule;
declare function repeat(rule: TRule): TRule;
declare function repeat1(rule: TRule): TRule;
declare function optional(rule: TRule): TRule;
declare function prec(num: number, rule: TRule): TRule;
prec.left = (num?: number, rule: TRule) => TRule;
prec.right = (num?: number, rule: TRule) => TRule;
prec.dyanmic = (num: number, rule: TRule) => TRule;
declare function token(rule: TRule): TRule;
token.immediate = (rule: TRule) => TRule;
declare function alias(rule: TRule, name: TRule): TRule;
declare function field(name: string, rule: TRule): TRule;
`;

  writer.write(furtherDefinitions);
  writer.close();

  const endTime = performance.now() - startTime;
  console.log(`Done: ${endTime.toFixed(3)}s`);
}

if (!fs.existsSync('grammar.d.ts')) writeTypes();

fs.watchFile('grammar.js', writeTypes);
