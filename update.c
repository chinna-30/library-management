#include"header.h"
void update(struct st *ptr)
{
	char op;
	display(ptr);
	if(flag){
 	struct st *temp=ptr;
        while(temp!=0)
        {
                if(temp->bid==search_id){
                        printf("Are you sure you want to Update this Book details? (y/n): ");
                        scanf(" %c",&op);
                        if(op=='y'){ int x;
        printf("+-------------------------------------+\n");
        printf("|      Select the field to Update:    |\n");
        printf("+-------------------------------------+\n");
        printf("|      1.Book ID                      |\n");
        printf("+      2.Book Name                    +\n");
        printf("|      3.Author Name                  |\n");
        printf("|      4.Book Quantity                |\n");
        printf("+-------------------------------------+\n");
	printf("Enter your choice: ");
        scanf("%d",&x);
        switch(x)
        {

                case 1:
			printf("Enter Book id: ");
			scanf("%d",&temp->bid);
			break;
                case 2: printf("Enter Book Name: ");
                        scanf("%s",temp->bname);
			break;
                case 3:
                        printf("Enter Aothor Name: ");
                        scanf("%s",temp->aname);
			break;
                case 4:
			printf("Enter Book qty: ");
			scanf("%d",&temp->qty);
			break;
                default:printf("Invalid choice\n");return;
        }
	puts("Record updated Successfully");
        return;}
        else
	{	
		puts("Operation Aborted");
       		 return;
	}
        }
        else
        temp=temp->next;
        
	}
	}
}


