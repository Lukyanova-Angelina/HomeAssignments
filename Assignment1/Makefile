all: prog
	
prog: mainfile.o hello.o 
	g++ mainfile.o hello.o -o prog

mainfile.o: mainfile.cpp
	g++ -c mainfile.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

clean:
	rm -rf *.o prog

