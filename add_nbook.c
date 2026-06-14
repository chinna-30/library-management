#include"header.h"
void add_nbook(struct st **ptr)
{
	struct st *temp=(struct st *)malloc(sizeof(struct st));
	printf("Enter book details:\n");

	printf("\n\tenter the book name : ");
	scanf(" %[^\n]",temp->bname);
	printf("\tenter the name of author : ");
	scanf(" %[^\n]",temp->aname);
	printf("\n\tenter the quantity of the book : ");
	scanf("%d",&temp->qty);
	temp->bid=++id;
	temp->next=0;
	if(*ptr==0)
	{
	    *ptr=temp;
	}
	else
	{
	    struct st *last=*ptr;
	    while(last->next!=0)
		    last=last->next;
	    last->next=temp;

	}

}
