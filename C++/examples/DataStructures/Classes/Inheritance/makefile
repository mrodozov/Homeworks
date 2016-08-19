

employee.o : employee.cpp
	g++ -c employee.cpp -o employee.o

manager.o : manager.cpp
	g++ -c manager.cpp -o manager.o

supervisior.o : supervisior.cpp
	g++ -c supervisior.cpp -o supervisior.o
	
all: main_empl.o employee.o manager.o supervisior.o main_empl.cpp
	g++ main_empl.cpp -o main_empl.o employee.o manager.o supervisior.o

clean :
	rm *.o *~
