main: main.o funcs.o
	g++ -o main main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests tests.o funcs.o

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.cpp

tests.o: tests.cpp funcs.cpp

clean:
	rm -f *.o main tests a.out