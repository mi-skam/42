#!/usr/bin/env bash
SRC=$1
NAME=${SRC%.c}

# remove old program if present
[ -f ${NAME} ] && rm ./${NAME}
# compile the code
echo "-- compiling --"
gcc -Wall -Wextra "$@" -o "$NAME"
