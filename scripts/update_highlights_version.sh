#!/bin/bash

# Intended for usage with `npm version` command and `version` stage

sed -i " s/\(; tree-sitter-awk v\)[0-9]\.[0-9]\.[0-9]/\1$(npm pkg get version | tr -d \")/ " queries/highlights.scm

git add queries/highlights.scm
