#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
{
	int bid;
	char bname[100];
	char aname[100];
	int qty;
	struct st *next;
};
struct isu
{
	int isid;
	int bid;
	int uid;
	char uname[15];
	char isu_date[15];
	char due_date[15];
	char ret_date[15];
	int fine;
	struct isu *next;
};

extern int id,sid;
void add_nbook(struct st **);
void view_all(struct st *);
