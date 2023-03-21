#!/bin/bash
gCC -wall -Wextra -werror -pedantic -c -fPIC
-shared -o libal1.so
export LD_LIBRARY_PATH=.:SLD_LIBRARY_PATH
