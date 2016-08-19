all: main

main: Containee  main.cpp
	g++ main.cpp -o main Containee.o

Containee: Containee.cpp
	g++ -c Containee.cpp -o Containee.o