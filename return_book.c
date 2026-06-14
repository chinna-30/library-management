#include"header.h"
void return_book(struct st *ptr, struct isu **ptr2)
{
    int bid;

    printf("Enter Book ID to return: ");
    scanf("%d", &bid);

    struct isu *temp = *ptr2;
    struct isu *prev = NULL;

    while(temp)
    {
        if(temp->bid == bid)
            break;

        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL)
    {
        printf("Book not found in issued list\n");
        return;
    }

    /* Get current date */
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);

    strftime(temp->ret_date,
             sizeof(temp->ret_date),
             "%d-%m-%Y",
             tm_info);

    /* Fine calculation */
    int d1,m1,y1;
    int d2,m2,y2;

    sscanf(temp->due_date,"%d-%d-%d",&d1,&m1,&y1);
    sscanf(temp->ret_date,"%d-%d-%d",&d2,&m2,&y2);

    int days_late = d2 - d1;

    if(days_late > 0)
        temp->fine = days_late * 5;
    else
        temp->fine = 0;

    /* Increase quantity in library */
    struct st *btemp = ptr;

    while(btemp)
    {
        if(btemp->bid == bid)
        {
            btemp->qty++;
            break;
        }

        btemp = btemp->next;
    }

printf("\n");
printf("+================================+\n");
printf("|         BOOK RETURN DETAILS    |\n");
printf("+================================+\n");
printf("| Book ID      : %-15d |\n", temp->bid);
printf("| User ID      : %-15d |\n", temp->uid);
printf("| User Name    : %-15s |\n", temp->uname);
printf("| Issue Date   : %-15s |\n", temp->isu_date);
printf("| Due Date     : %-15s |\n", temp->due_date);
printf("| Return Date  : %-15s |\n", temp->ret_date);
printf("| Fine Amount  : Rs.%-11d  |\n", temp->fine);
printf("+================================+\n");
printf("| Book Returned Successfully     |\n");
printf("+================================+\n");
    /* Remove from issue list */
    if(prev == NULL)
        *ptr2 = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    printf("Book Returned Successfully\n");
}

