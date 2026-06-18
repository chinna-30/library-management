#include"header.h"
void terminate(struct st *ptr,struct isu *ptr1)
{
	char op;
        printf("+-------------------------------------+\n");
        printf("|      S/s :Save and Exit             |\n");
        printf("+-------------------------------------+\n");
        printf("|      E/e :Exit without Saving       |\n");
        printf("+-------------------------------------+\n");
        printf("\n");
	printf("       Enter your choice : ");
        scanf(" %c",&op);
        
	switch(op|32)
        {
                case 's':save(ptr);
			issue_save(ptr1); return;
                case 'e':puts("Exit without saving the student Record\n");return;
                default:printf("Invalid choice\n");return;
        }
}
