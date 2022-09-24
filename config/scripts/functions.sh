#!/bin/bash

__debug_file="$NOTEBOOK_HOME/templates/debug.h"

co() { g++ -DLOCAL -DDEBUG="\"$__debug_file\"" -std=c++17 -O2 -o "${1%.*}" "${1%.*}.cpp" -Wall -Wshadow; }
run() { co $1 && ./${1%.*} & fg; }