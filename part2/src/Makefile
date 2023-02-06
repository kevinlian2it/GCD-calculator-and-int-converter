CC = gcc
CFLAGS = -g -Wall -Werror -pedantic-errors

all: convert

convert: convert.o
	$(CC) $(CFLAGS) convert.o -o convert

convert.o: convert.c
	$(CC) $(CFLAGS) -c convert.c

clean:
	rm -f convert convert.o

