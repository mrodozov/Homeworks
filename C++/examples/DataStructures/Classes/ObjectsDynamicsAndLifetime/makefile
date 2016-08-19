
all: main.o leaf.o branch.o tree.o main.cpp
	g++ main.cpp -o main.o leaf.o branch.o tree.o
leaf.o : leaf.cpp
	g++ -c leaf.cpp -o leaf.o
branch.o : branch.cpp
	g++ -c branch.cpp -o branch.o
tree.o : tree.cpp
	g++ -c tree.cpp -o tree.o

clean:
	rm *.o *~
