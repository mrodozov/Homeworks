CC=g++
CFLAGS=-g -O0

KERNEL = $(shell uname)
ROOTINC = $(shell root-config --cflags) 
ROOTLIBS = $(shell root-config --glibs)


all:
	$(CC) main.cpp -o type_casting.o $(ROOTINC) $(ROOTLIBS)