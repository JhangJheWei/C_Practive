all:one
CC = gcc
INCLUDE = .
CFLAGS = -g -Wall -ansi
objects = main.o subroutine.o
one:${objects}
	$(CC) -o one $(objects)
main.o:main.c declare.h
	$(CC) -l$(INCLUDE)$(CFLAGS) -c main.c
subroutine.o:subroutine.c
	$(CC) -l$(INCLUDE)$(CFLAGS) -c subroutine.c
clean:
	rm one ${objects}
