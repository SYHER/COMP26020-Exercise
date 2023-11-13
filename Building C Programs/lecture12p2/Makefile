all: prog

prog: main.o module1.o module2.o
	gcc main.o module1.o module2.o -o prog

module1.o: module1.c module1.h
	gcc -c module1.c -o module1.o

module2.0: module2.c module2.h
	gcc -c module2.c -o module2.o

main.0: main.c module1.h module2.h
	gcc -c main.c -o main.o

clean:
	rm -rf *.o prog