#include"header.h"
void issue(struct st *lbk,struct isu **isuptr)
{
	struct st *btemp=lbk;
	struct isu *itemp;
	int bid;
	time_t t;
	struct tm *ptr;

	display(btemp);

	char op;
	printf("Do you want this book(y/n): ");
	scanf(" %c",&op);
	if(op=='y'){

	while(btemp!=NULL)
	{
        	if(btemp->bid ==search_id)
                break;

        	btemp = btemp->next;
    	}

        if(btemp == NULL)
        {
        	printf("\nBook ID not found\n");
                return;
    	}

    	printf("\nSelected Book\n");
    	printf("Book ID   : %d\n",btemp->bid);
    	printf("Book Name : %s\n",btemp->bname);
    	printf("Author    : %s\n",btemp->aname);
    	printf("Quantity  : %d\n",btemp->qty);
	if(btemp->qty <= 0)
	{
       		 printf("\nBook not available\n");
        	return;
    	}

	char ch;
  	printf("\nConfirm Issue (y/n) : ");
  	scanf(" %c",&ch);
	
	if((ch|32) != 'y')
	{
        	printf("Issue cancelled\n");
        	return;
    	}

    /* Create issue record */
    	itemp = malloc(sizeof(struct isu));

   	 if(itemp == NULL)
   	 {
   	     printf("Memory allocation failed\n");
   	     return;
   	 }

    	itemp->isid = isid++;
    	itemp->bid = btemp->bid;
	
	printf("Enter User ID : ");
	scanf("%d",&itemp->uid);

	printf("Enter User Name : ");
    	scanf(" %[^\n]",itemp->uname);

    /* Issue Date */
    	t = time(NULL);
    	ptr = localtime(&t);

    	strftime(itemp->isu_date,
        sizeof(itemp->isu_date),"%d-%m-%Y",ptr);

    /* Due Date = Issue Date + 10 Days */
    	t += 10 * 24 * 60 * 60;

    	ptr = localtime(&t);

    	strftime(itemp->due_date,
      	sizeof(itemp->due_date),"%d-%m-%Y",ptr);

    /* Return date empty while issuing */
    	itemp->ret_date[0] = '-';
    	itemp->fine=0;

    /* Reduce quantity */
    	btemp->qty--;

    /* Insert at beginning of issue list */
    	itemp->next = *isuptr;
    	*isuptr = itemp;
    	printf("BOOK ISSUED SUCCESSFULLY\n");
    	printf("Issue ID   : %d\n",itemp->isid);
    	printf("Book ID    : %d\n",itemp->bid);
    	printf("User ID    : %d\n",itemp->uid);
    	printf("User Name  : %s\n",itemp->uname);
    	printf("Issue Date : %s\n",itemp->isu_date);
    	printf("Due Date   : %s\n",itemp->due_date);
    	printf("Remaining Quantity : %d\n",btemp->qty);
	puts("Don't forget Due date");
   }
   else
	   puts("Thank you for visiting");
}
