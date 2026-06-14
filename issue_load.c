#include"header.h"
void issue_load(struct isu **ptr)
{

	struct isu temp;
	FILE *fp=fopen("isuload.txt","r");
	if(fp==NULL){
		return;
	}
	while(fscanf(fp,"%d|%d|%d|%[^|]|%[^|]|%[^|]|%[^|]|%d\n",&temp.isid,&temp.bid,&temp.uid,temp.uname,
				 temp.isu_date,temp.due_date,temp.ret_date,&temp.fine) == 8)
	{
		struct isu *data;
		data=(struct isu *)malloc(sizeof(struct isu));
		*data=temp;
		data->next=0;
		if(*ptr==0)
			*ptr=data;
		else
		{
			struct isu *last = *ptr;
			while(last->next!=0)
				last=last->next;
			last->next=data;
		}
	}
	fclose(fp);

}
