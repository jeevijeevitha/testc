ABC.exe:main.o big3.o fact.o pal.o big2.o add.o 
	gcc -o ABC.exe main.o big3.o fact.o pal.o big2.o add.o 

main.o:main.c
	gcc -c main.c	
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
pal.o:pal.c
	gcc -c pal.c
big2.0:big2.c
	gcc -c big2.c
add.0:add.c
	gcc-c add.c
