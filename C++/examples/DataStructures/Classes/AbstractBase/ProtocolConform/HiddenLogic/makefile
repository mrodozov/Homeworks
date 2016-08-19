all:	Objcts
CPP := $(wildcard *.cpp)
OO := $(wildcard *.o)
CC=g++ -std=c++14

Objcts: $(CPP)
	$(CC) -c $(CPP)
	
clean:
	find ./ -maxdepth 10 -type f -iname '*.o' -delete;
	find ./ -maxdepth 10 -type f -iname '*~' -delete