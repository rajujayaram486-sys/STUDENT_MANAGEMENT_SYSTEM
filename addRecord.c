#include"header.h"

void addRecords(SLL **p)
{
	int n=1;
	SLL *check=*p;
	while(1) // to find unique rollno
	{
		if(check==0)
		{
			break;
		}
		if(check->rollno==n)
		{
			check=*p;
			n++;
		}
		else
			check=check->next;
	}
	SLL *new=malloc(sizeof(SLL));

	new->rollno=n;  //sets unique rollno

	printf("\nEnter name and percentage\n");
	scanf("%s %f",new->name,&new->marks);
	if((*p==0) || (new->rollno)<((*p)->rollno))
	{
		new->next=*p;
		*p=new;
	}
	else
	{
		SLL *temp=*p,*prev;
		while((temp) && ((new->rollno)>(temp->rollno)))
		{
			prev=temp;
			temp=temp->next;
		}
		prev->next=new;
		new->next=temp;
	}
}

