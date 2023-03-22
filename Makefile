test3.exe: test3.o lib3.o
	gcc -o test3.exe test3.o lib3.o

test3.o: test3.c
	gcc -o test3.o -c test3.c

lib3.o: lib3.c
	gcc -o lib3.o -c lib3.c

# remove all temp files
clean:
	rm -f test3.exe *.o
#   execute main program
run:
	./test3.exe