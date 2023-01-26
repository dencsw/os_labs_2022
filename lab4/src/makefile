CC=gcc
CFLAGS=-I.

all : parallel_min_max zombie

parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_result.out utils.o find_min_max.o parallel_min_max.c $(CFLAGS)

utils.o : utils.h
	$(CC) -o utils.o -c utils.c $(CFLAGS)

find_min_max.o : utils.h find_min_max.h
	$(CC) -o find_min_max.o -c find_min_max.c $(CFLAGS)

zombie: process_memory.o
	$(CC) -o zzzombie.out process_memory.o $(CFLAGS)

process_memory.o:
	$(CC) -o process_memory.o process_memory.c $(CFLAGS)

clean :
	rm *.o