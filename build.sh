#!/bin/bash

set -e

file=./foo

tree-sitter generate
echo "(re)generated grammar"
echo

cat "$file"
echo

tree-sitter parse "$file"
