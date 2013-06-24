SHELL=/bin/sh
CC=cc
CFLAGS=-Wall -g
SOURCES=ex1.c ex3.c ex4.c ex5.c ex6.c ex7.c ex8.c
EXECUTABLES=$(SOURCES:.c=)

default: all

all: $(SOURCES)
	$(CC) $(CFLAGS) ex1.c -o ex1
	$(CC) $(CFLAGS) ex3.c -o ex3
	$(CC) $(CFLAGS) ex4.c -o ex4
	$(CC) $(CFLAGS) ex5.c -o ex5
	$(CC) $(CFLAGS) ex6.c -o ex6
	$(CC) $(CFLAGS) ex7.c -o ex7

clean:
	rm -f $(EXECUTABLES)
