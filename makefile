outfile:main.c add_nbook.c view_all.c
	cc main.c add_nbook.c view_all.c -o book
clean:
	rm -f book *.o
