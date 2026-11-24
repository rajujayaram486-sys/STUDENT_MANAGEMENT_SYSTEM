#include"header.h"

void sortRecords(SLL *r)
{
	char c;
	printf("\nN/n)Sort records based on name P/p)Sort records based on percentage\n");
	printf("Enter option\n\n");
	scanf(" %c",&c);
	switch(c)
	{

// ================================== sort records by alphabetical order in names ================================
		
		case 'n':
		case 'N':
			{
				int tnum;
				char t[20];
				float tmarks;
				SLL *q,*p;
				for(p=r;p;p=p->next)
				{
					for(q=p->next;q;q=q->next)
					{
						if(strcmp(p->name,q->name)>0)
						{
							tnum=p->rollno;
							p->rollno=q->rollno;
							q->rollno=tnum;

							strcpy(t,p->name);
							strcpy(p->name,q->name);
							strcpy(q->name,t);

							tmarks=p->marks;
							p->marks=q->marks;
							q->marks=tmarks;
						}
					}
				}
			}
			break;

// ================================== sort records by precentage (Highest to Lowest) ================================

		case 'p':
		case 'P':
			{
				int tnum;
				char t[20];
				float tmarks;
				SLL *q,*p;
				for(p=r;p;p=p->next)
				{
					for(q=p->next;q;q=q->next)
					{
						if((p->marks)<(q->marks))
						{
							tnum=p->rollno;
							p->rollno=q->rollno;
							q->rollno=tnum;

							strcpy(t,p->name);
							strcpy(p->name,q->name);
							strcpy(q->name,t);

							tmarks=p->marks;
							p->marks=q->marks;
							q->marks=tmarks;
						}
					}
				}
			}
			break;
		default:printf("\nInvalid Option\n");
	}
}




