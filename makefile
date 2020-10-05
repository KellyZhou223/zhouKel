all: main.o euler.o
	gcc -o euler main.o euler.o

main.o: main.c euler.c
	gcc -c main.c

euler.o: euler.c euler.h
	gcc -c euler.c
