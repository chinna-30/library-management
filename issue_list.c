#include"header.h"
void issue_list(struct isu *ptr)
{
	struct isu *temp=ptr;
	if(temp!=NULL)
	{
		 printf("\n");
        printf("\t+----------+------------+-------------+---------------+-------------+-------------+-------------+--------------+\n");
        printf("\t|                                         LIST OF ISSUED BOOKS TO STUDENTS                                     |\n");
        printf("\t+----------+------------+-------------+---------------+-------------+-------------+-------------+--------------+\n");
        printf("\t| ISSUE ID |  BOOK ID   |   USER ID   |   USER NAME   | ISSUE  DATE |   DUE DATE  | RETURN DATE | FINE AMMOUNT |\n");
        printf("\t+----------+------------+-------------+---------------+-------------+-------------+-------------+--------------+\n");

        while(temp != NULL)
        {
            printf("\t| %-8d | %-10d | %-11d | %-13s | %-11s | %-11s | %-11s |       %-6d |\n",temp->isid,temp->bid,
                            temp->uid,temp->uname,temp->isu_date,temp->due_date,temp->ret_date,temp->fine);

            temp = temp->next;
        }
        printf("\t+----------+------------+-------------+---------------+-------------+-------------+-------------+--------------+\n");


	}
	else
		puts("\t\tNo books are currently issued.\n");

}
