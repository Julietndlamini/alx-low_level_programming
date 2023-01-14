#!/bin/bash
gcc -Wall -pedantic -Werror -c *.c
ar -r liball.a *.o
ranlib liball.a
~               
