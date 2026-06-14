#include"header.h"
void save(struct st *ptr)
{

        FILE *fp=fopen("nbdata.txt","w");
	struct st *ptr1=ptr;
    

    fprintf(fp,"\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    fprintf(fp,"\t\t|                                     BOOK MANAGEMENT MENU                                    |\n");
    fprintf(fp,"\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    fprintf(fp,"\t\t|    BOOK ID    |           BOOK NAME          |         AUTHOR NAME          | BOOK QUANTITY |\n");
    fprintf(fp,"\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    while(ptr != 0)
    {
        fprintf(fp,"\t\t| %-13d | %-28s | %-28s | %-13d |\n",ptr->bid,ptr->bname,ptr->aname,ptr->qty);
        ptr = ptr->next;
    }

    fprintf(fp,"\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    fclose(fp);	
	
        FILE *fs=fopen("nbload.txt","w");
 	while(ptr1 != 0)
    	{
        	fprintf(fp,"%d|%s|%s|%d\n",ptr1->bid,ptr1->bname,ptr1->aname,ptr1->qty);
        	ptr1 = ptr1->next;
    	}	
        fclose(fs);
	printf("\n");
	puts("Record Saved Successfully\n");
	printf("\n");
}

