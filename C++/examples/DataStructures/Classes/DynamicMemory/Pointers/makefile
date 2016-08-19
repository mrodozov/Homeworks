all: main.o employee.o manager.o supervisior.o main.cpp
	g++ main.cpp -o main.o employee.o manager.o supervisior.o
employee.o : employee.cpp
	g++ -c employee.cpp -o employee.o
manager.o : manager.cpp
	g++ -c manager.cpp -o manager.o
supervisior.o : supervisior.cpp
	g++ -c supervisior.cpp -o supervisior.o
	
clean :
	rm *.o *~
