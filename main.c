#include"header.h"

int search_id=0;
int verify(void);
void id_update(struct st *hptr,struct isu *ishptr);

int id=0;
int sid=0;
int isid=1;
int main()
{

	struct st *hptr=0;
	struct isu *ishptr=0;
	int op,n;
	char ch,w;
	//printf("sizeof(struct st) = %lu\n", sizeof(struct st));
	load(&hptr);
	issue_load(&ishptr);
	id_update(hptr,ishptr);
	
	while(1){

	printf("\n\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|      Book Management Menu      |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    1 : Add New Book            |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    2 : Update Book Details     |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    3 : Remove Book             |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    4 : Search Book             |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    5 : View All Books          |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    6 : Issue Book              |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    7 : Return Book             |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    8 : List Issued Books       |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|    9 : Save                    |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n");
	printf("\t\t|   10 : Exit                    |\t\t\n");
	printf("\t\t+--------------------------------+\t\t\n\n");
	printf("Choose the option in the menu : ");
	scanf("%d",&op);

	switch(op)
	{
		case 1: n=verify();
			if(n)
			{
				do
				{
					add_nbook(&hptr);
					printf("Do you want add another Book (y/n): ");
					scanf(" %c",&ch);
				}while(ch=='y');
				puts("Books are Added Successfully");
			}
				system("clear");
				break;
		case 2: update(hptr);
			sleep(2);
			system("clear");
			break;
		case 3: bremove(&hptr);                 
			while(getchar() != '\n'); 
                        getchar();                 
                        system("clear");
			break;
		case 4:  printf("\n");
			 printf("\t\t+----------------------------+\n");
			 printf("\t\t|        SEARCH BOOK         |\n");
    		       	display(hptr);
			while(getchar() != '\n'); 
                        getchar();                 
			system("clear");
			break; 
		case 5: printf("\nLIST OF AVAILABLE BOOKS IN THE LIBRARAY\n");
			view_all(hptr);
			while(getchar() != '\n'); 
                        getchar();                 
			system("clear");
			break; 
		case 6:issue(hptr,&ishptr);
			while(getchar() != '\n'); 
                        getchar();                 
			system("clear");
			break;
		case 7: return_book(hptr,&ishptr);
			while(getchar() != '\n'); 
                        getchar();                 
			system("clear");
			break;
		case 8: issue_list(ishptr);
			while(getchar() != '\n'); 
                        getchar();                 
			system("clear");
			break;
        	case 9:save(hptr);
			printf("\nALL BOOK DETAILS ARE SAVED IN THE FILE book.txt \n");
			issue_save(ishptr);
			while(getchar() != '\n'); 
                        getchar();                 
			system("clear");
			break;
	      case 10:  terminate(hptr);
			return 0;
	}
	}
}

int verify(void)
{
	int n;
	printf("Enter the password: ");
	scanf("%d",&n);
	if(n==1234)
	return 1;
	else{
		puts("Unauthorized access ");
	return 0;
	}
}
void id_update(struct st *hptr,struct isu *ishptr)
{
	if(ishptr!=0)
        {
        struct isu *last=ishptr;
        while(last->next!=0)
                last=last->next;
        sid=last->isid;
        }
        else
               sid=1298;
        if(hptr!=0)
        {
        struct st *last=hptr;
        while(last->next!=0)
                last=last->next;
        id=last->bid;
        }
        else
               id=214365;
}
