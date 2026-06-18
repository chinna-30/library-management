#include"header.h"
void bremove(struct st **ptr)
{
	char op1;
	printf("\n");
	printf("\t\t+----------------------------+\n");
        printf("\t\t|        REMOVE BOOK         |\n");
	display(*ptr);
	if(flag){
		flag=0;
	printf("\nDELETE THIS BOOK (Y/N) : ");
        scanf(" %c",&op1);
 	if((op1|32)!='y')
        {
        	printf("\nDELETE OPERATION CANCELLED\n");
        	return;
        }
	else
		del_id(ptr);
	}
	
	      

}

