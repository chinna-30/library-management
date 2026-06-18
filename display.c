#include"header.h"

int print_books(struct st *ptr,int op,char a[]);
void display(struct st *ptr)
{
    char op;
    char name[100];
    int id;
    printf("\n");
    printf("\t\t+----------------------------+\n");
    printf("\t\t|     A. BY BOOK ID          |\n");
    printf("\t\t|     B. BY BOOK NAME        |\n");
    printf("\t\t|     C. BY AUTHOR NAME      |\n");
    printf("\t\t+----------------------------+\n");
    printf("CHOOSE THE OPTION : ");
    scanf(" %c",&op);
    switch(op|32)
    {
        case 'a':
        {
            char buf[20];
            printf("Enter Book ID : ");
            scanf("%d",&id);
            sprintf(buf,"%d",id);
            search_id=print_books(ptr,1,buf);
            break;
        }
        case 'b':
            printf("Enter Book Name : ");
            scanf(" %[^\n]",name);
            search_id=print_books(ptr,2,name);
            break;
        case 'c':
            printf("Enter Author Name : ");
            scanf(" %[^\n]",name);
            search_id=print_books(ptr,3,name);
            break;
        default:
            printf("\nINVALID OPTION\n");return ;
    }
    return;
}


int print_books(struct st *ptr,int op,char a[])
{

if(ptr==NULL){
 printf("Library is Empty\n");
        return -1;
}

	printf("\n");
	printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
	printf("\t\t|                                     BOOK MANAGEMENT MENU                                    |\n");
    	printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
  	printf("\t\t|    BOOK ID    |           BOOK NAME          |         AUTHOR NAME          | BOOK QUANTITY |\n");
   	printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    	
	while(ptr != NULL)
	{
		if((op == 1 && ptr->bid == atoi(a)) || (op == 2 && strcmp(ptr->bname,a)==0) ||
           	  (op == 3 && strcmp(ptr->aname,a)==0))
		{
    	    	printf("\t\t| %-13d | %-28s | %-28s | %-13d |\n",ptr->bid,ptr->bname,ptr->aname,ptr->qty);
	       	printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
        	flag=1;
		return ptr->bid;
		break;
		}
		else
    	    	ptr = ptr->next;

    	}


puts("Book not Available in Library");
return 0;
}
