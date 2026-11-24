#include "header.h"

void saveRecords(SLL **p)
{

// =============================== Save records into file ================================

	FILE *fp;
	if(*p==0)
	{
		printf("No records are present\n");
		return;
	}
	else
	{
		fp=fopen("student.dat","w");
		while(*p)
		{
			fprintf(fp,"%d %s %f\n",(*p)->rollno,(*p)->name,(*p)->marks);
			(*p)=(*p)->next;
		}
	}
	fclose(fp);
}

// =============================== Read records from file if file and data is present at execution ================================

void loadRecords(SLL **p)
{
	char ch;
	FILE *fp=fopen("student.dat","r");
	if(fp==0)
	{
		printf("\nNo file to load records\n");
		return;
	}
	ch=fgetc(fp);
	if(ch==-1)
	{
		printf("\nNo saved records in file\n!!!Add records!!!\n");
		fclose(fp);
		return;
	}
	rewind(fp);
	while(1)
	{
		SLL *new;
		new=malloc(sizeof(SLL));
		new->next=0;
		if((fscanf(fp,"%d %s %f",&new->rollno,new->name,&new->marks))==-1)
			break;
		if(*p==0)
			*p=new;
		else
		{
			SLL *last=*p;
			while(last->next)
				last=last->next;
			last->next=new;
		}
	}
	fclose(fp);
}

