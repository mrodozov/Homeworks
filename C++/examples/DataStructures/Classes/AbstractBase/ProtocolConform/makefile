CC=g++ -std=c++14

all:	main.cpp
	+make -C HiddenLogic/
	+make -C UserClasses/
	$(CC) main.cpp -o main.o HiddenLogic/*.o UserClasses/*.o
	
clean:
	find ./ -maxdepth 10 -type f -iname '*.o' -delete;
	find ./ -maxdepth 10 -type f -iname '*~' -delete
