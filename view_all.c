#include"header.h"
void view_all(struct st *ptr)
{
    if(ptr==0)	
    printf("\n\n\t\tTHERE IS NO BOOKS IN LIBRARY\n");
    else{	
    printf("\n");
    printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    printf("\t\t|                                     BOOK MANAGEMENT MENU                                    |\n");
    printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    printf("\t\t|    BOOK ID    |           BOOK NAME          |         AUTHOR NAME          | BOOK QUANTITY |\n");
    printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    while(ptr != 0)
    {
        printf("\t\t| %-13d | %-28s | %-28s | %-13d |\n",ptr->bid,ptr->bname,ptr->aname,ptr->qty);
        ptr = ptr->next;
    }

    printf("\t\t+---------------+------------------------------+------------------------------+---------------+\n");
    }
}
