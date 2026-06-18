outfile:main.c add_nbook.c view_all.c load.c terminate.c save.c display.c bremove.c del_id.c update.c issue.c issue_list.c issue_save.c issue_load.c return_book.c 
	cc main.c add_nbook.c view_all.c load.c terminate.c save.c display.c bremove.c del_id.c update.c issue.c issue_list.c issue_save.c issue_load.c return_book.c -o book
clean:
	rm -f book *.o
