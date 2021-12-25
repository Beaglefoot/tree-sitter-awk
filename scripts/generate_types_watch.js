const fs = require('fs');
const { writeTypes } = require('./generate_types.js');

if (!fs.existsSync('grammar.d.ts')) writeTypes();

fs.watchFile('grammar.js', writeTypes);
