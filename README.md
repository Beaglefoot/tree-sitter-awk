tree-sitter-awk
================

GNU AWK grammar for [tree-sitter](https://github.com/tree-sitter/tree-sitter).


### Development

Install the dependencies:

    yarn

Although grammar is basically a JS file you can still benefit from types (references, go to implementation, renames...).

To build types in watch mode:

    yarn types:watch

Test:

    yarn test


### References

* [GAWK Man page](https://www.man7.org/linux/man-pages/man1/gawk.1.html)
* [Original Bison grammar](http://git.savannah.gnu.org/cgit/gawk.git/tree/awkgram.y)
