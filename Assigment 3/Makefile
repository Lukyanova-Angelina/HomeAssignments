all: prog
	
prog: ClassTransformers.o 
	g++ ClassTransformers.o -o prog
ClassTransformers.o: ClassTransformers.cpp
	g++ -c ClassTransformers.cpp
clean:
	rm -rf *.o prog
