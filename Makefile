all: main.o agenda.o
	gcc main.o agenda.o -o main

main.o: main.c contacto.h agenda.h agenda.c
	gcc -c main.c

calculadora.o: agenda.h contacto.h agenda.c
	gcc -c agenda.c 

clean: 
	rm *.o
	rm main