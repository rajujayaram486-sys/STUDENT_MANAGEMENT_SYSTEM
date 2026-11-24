#include "header.h"

// =============================== Delete all records ================================

void deleteAllRecords(SLL **p) 
{
	if(*p==0)
	{
		printf("No records\n");
		return;
	}

	SLL *del=*p;
	while(del)
	{

		free(del);
		*(p)=(*p)->next;
		if(*p==0)
		{
			printf("All Records deleted!!!\n");
			return;
		}
		del=*p;
	}
}

void deleteRecords(SLL **p)
{
	char c;
	printf("\nr/R)Delete record based on rollno n/N)Delete record based on name\n");
	printf("Enter option\n\n");
	scanf(" %c",&c);
	switch(c)
	{

// =============================== Delete records based on rollno ================================

		case 'r':
		case 'R':
			{
				int num;
				printf("\nEnter rollno to delete\n");
				scanf("%d",&num);
				SLL *del=*p,*prev;
				while(del)
				{
					if(num==del->rollno)
					{
						if(del->rollno==(*p)->rollno)
							*p=del->next;
						else
							prev->next=del->next;
						free(del);
						printf("Record with rollno %d is deleted\n",num);
						return;
					}
					prev=del;
					del=del->next;
				}
				printf("Rollno is not present\n");	
			}
			break;

// =============================== Delete records based on name ================================

		case 'n':
		case 'N':
			{
				char s[20];int nc=0,n;
				printf("\nEnter name to delete\n");
				scanf("%s",s);
				SLL *del=*p,*prev;

				while(del)
				{
					if(strcmp(del->name,s)==0)
						nc++;
					del=del->next;
				}

				if(nc==1) // if name is present one time
				{
					del=*p;
					while(del)
					{
						if(strcmp(del->name,s)==0)
						{
							if(strcmp(s,(*p)->name)==0)
								*p=del->next;
							else
								prev->next=del->next;
							free(del);
							return;
						}
						prev=del;
						del=del->next;
					}
				}

				else if(nc>1) // if same is present multiple times
				{
					del=*p;
					while(del)
					{
						if(strcmp(del->name,s)==0)
							printf("%d %s %f\n",del->rollno,del->name,del->marks);
						del=del->next;
					}
					printf("\n!!!Multiple records found!!!\nEnter rollno to delete\n");
					scanf("%d",&n);
					del=*p;
					while(del)
					{
						if(n==del->rollno)
						{
							if(del->rollno==(*p)->rollno)
								*p=del->next;
							else
								prev->next=del->next;
							free(del);
							printf("Record with Name %s and rollno %d is deleted\n",s,n);
							return;
						}
						prev=del;
						del=del->next;
					}

				}
				printf("\nName is not present\n");
			}
			break;

			default:printf("\nInvalid option\n");
	}
}


