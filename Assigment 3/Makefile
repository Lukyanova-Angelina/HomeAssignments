all: prog
	
prog: ClassTransformers.o ClassWeapon.o ClassAutobots.o main.o ClassDecepticons.o ClassWinx.o
	g++ ClassTransformers.o ClassWeapon.o ClassAutobots.o main.o ClassDecepticons.o ClassWinx.o -o prog
ClassTransformers.o: ClassTransformers.cpp ClassWeapon.cpp ClassAutobots.cpp main.cpp ClassDecepticons.cpp ClassWinx.cpp
	g++ -c ClassTransformers.cpp ClassWeapon.cpp ClassAutobots.cpp main.cpp ClassDecepticons.cpp ClassWinx.cpp
clean:
	rm -rf *.o prog
