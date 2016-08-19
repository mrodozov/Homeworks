CC = g++ -std=c++14

all: main

main: NormalInh AbstractBase  main.cpp
	$(CC) main.cpp -o main NormalInh.o AbstractBase.o

NormalInh: NormalInheritance.cpp
	$(CC) -c NormalInheritance.cpp -o NormalInh.o

AbstractBase: AbstractBase.cpp 
	$(CC) -c AbstractBase.cpp -o AbstractBase.o
	