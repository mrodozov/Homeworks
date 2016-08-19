all: rectangle.o
	g++ main_rect.cpp -o main.o rectangle.o
	g++ rectangle_class.cpp -o main_not_separated.o
rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp -o rectangle.o
	
clean:
	rm *.o *~
