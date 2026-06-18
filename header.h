#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
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

extern int id,sid,isid,flag;
extern int search_id;
void add_nbook(struct st **);
void view_all(struct st *);
void load(struct st **);
void terminate(struct st *,struct isu*);
void save(struct st *);
void display(struct st *);
void bremove(struct st **);
void del_id(struct st **);
void update(struct st *);
void issue(struct st *,struct isu **);
void issue_list(struct isu *);
void issue_save(struct isu *);
void issue_load(struct isu **);
void return_book(struct st *,struct isu **);
