#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar -rc liballa.a *.o
ranlib liballa.a
