#include"header.h"
void load(struct st **ptr)
{
	struct st temp;
	FILE *fs=fopen("nbload.txt","r+");
	if(fs==NULL){
		printf("File not found\n");
		return;
	}

	while(fscanf(fs,"%d|%[^|]|%[^|]|%d\n",&temp.bid,temp.bname,temp.aname,&temp.qty) == 4)
	{

		if(temp.bid>=id)
			id=temp.bid+1;
		struct st *data=(struct st *)malloc(sizeof(struct st));
		*data=temp;
		data->next=0;
		if(*ptr==0)
			*ptr=data;
		else
		{
			struct st *last = *ptr;
			while(last->next!=0)
				last=last->next;
			last->next=data;
		}
		
	}
	fclose(fs);


}
