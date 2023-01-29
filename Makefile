# C compiler and flags
CC     = gcc
CFLAGS = -std=c99 -Wall -Werror -pedantic -g


# TODO: Dummy target. Edit so it satisfies the requirements.
Hello: Hello.o
	${CC} ${CFLAGS} -o $@ $^