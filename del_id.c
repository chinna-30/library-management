#include"header.h"
void del_id(struct st **ptr)
{
	struct st *temp, *prev;
	 temp=*ptr;
	 prev=NULL;
	if(temp==NULL)
            printf("\nBOOK NOT FOUND\n");
	 while(temp)
         {
                if(temp->bid==search_id)
                {
                    if(temp==*ptr)
                        *ptr=temp->next;
                    else
                        prev->next=temp->next;

                    free(temp);
                    return;
                }

                prev=temp;
                temp=temp->next;
            }

            
}
