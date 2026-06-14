#include"header.h"
void terminate(struct st *ptr)
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
                case 's':save(ptr);return;
                case 'e':puts("Exit without saving the student Record\n");return;
                default:printf("Invalid choice\n");return;
        }
}
