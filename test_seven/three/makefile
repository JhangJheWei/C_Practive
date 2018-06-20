all:three
CC = gcc
INCLUDE = .
CFLAGS = -g -Wall -ansi
objects = main.o subroutine.o
three:${objects}
	$(CC) -o three $(objects)
main.o:main.c declare.h
	$(CC) -l$(INCLUDE)$(CFLAGS) -c main.c
subroutine.o:subroutine.c
	$(CC) -l$(INCLUDE)$(CFLAGS) -c subroutine.c
clean:
	rm three ${objects}
