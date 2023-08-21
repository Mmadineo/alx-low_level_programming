#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -FPIC *.c
gcc -shared -o liball.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
