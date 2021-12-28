reporter : obj/getter.o obj/main.o obj/header.o obj/param.o
		  gcc obj/* -o reporter

obj/getter.o : src/getter.c
				gcc -D_FORTIFY_SOURCE=2 $(CFLAGS) -c src/getter.c -o obj/getter.o

obj/header.o : src/header.c 
				gcc -D_FORTIFY_SOURCE=2 $(CFLAGS) -c src/header.c -o obj/header.o 

obj/param.o : src/param.c 
				gcc -D_FORTIFY_SOURCE=2 $(CFLAGS) -c src/param.c -o obj/param.o

obj/main.o : src/main.c 
				 gcc -D_FORTIFY_SOURCE=2 $(CFLAGS) -c src/main.c -o obj/main.o

clean:
	rm -f obj/*.o