ABC.exc:file1.o
	gcc -o ABC.exc file1.o
file1.o:file1.c
	gcc -c file1.c
