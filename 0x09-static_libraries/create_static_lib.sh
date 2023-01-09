#!/bin/bash
gcc -wall -pedatic -werror -wextra -c *.c
ar rc liball.a *.o
