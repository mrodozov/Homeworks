all: simple_examples control_flow data_structures functions make_homeworks

simple_examples:
	g++ examples/SimpleExamples/matrix.cpp -o examples/SimpleExamples/matrix.o	
	g++ examples/SimpleExamples/kvadratno.cpp -o examples/SimpleExamples/kvadratno.o
	g++ examples/SimpleExamples/faktoriel.cpp -o examples/SimpleExamples/faktoriel.o
	g++ examples/SimpleExamples/break-nechetni.cpp -o examples/SimpleExamples/break-nechetni.o
	g++ examples/SimpleExamples/simpleTypes.cpp -o examples/SimpleExamples/simpleTypes.o
	
control_flow:
	g++ examples/ControlFlow/if_condition.cpp -o examples/ControlFlow/if_condition.o
	g++ examples/ControlFlow/for_loop.cpp -o examples/ControlFlow/for_loop.o
	g++ examples/ControlFlow/while_loop.cpp -o examples/ControlFlow/while_loop.o
	g++ examples/ControlFlow/switch_statement.cpp -o examples/ControlFlow/switch_statement.o

data_structures:
	#g++ examples/DataStructures/Arrays/arrays.cpp -o examples/DataStructures/Arrays/arrays.o
	make -C examples/DataStructures/
	
functions:
	make -C examples/Functions
	#g++ examples/Functions/divide.cpp -o examples/Functions/divide.o
	#g++ examples/Functions/ParameterPassedByReference.cpp -o examples/Functions/ParameterPassedByReference.o
	#g++ examples/Functions/recursive.cpp -o examples/Functions/recursive.o

make_homeworks:
	make -C homeworks/

clean:
	find ./ -maxdepth 10 -type f -iname '*.o' -delete;
	find ./ -maxdepth 10 -type f -iname '*~' -delete
