#include "header.h"

void modifyList(SLL *p)
{
	int nc,n;
	char c,s[20],tname[20];
	float tmarks;
	SLL *mod=p;
	printf("\nr/R) Modify by rollno n/N) Modify by name p/P) Modify by percentage\n");
	printf("Enter option\n\n");
	scanf(" %c",&c);
	switch(c)
	{

// ================================== modify record using rollno ================================
		
		case 'r':
		case 'R':
			{
				int num;
				printf("\nEnter rollno to modify record\n");
				scanf("%d",&num);
				while(mod)
				{
					if(mod->rollno==num)
					{
						printf("\nRecord found\n");
						printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
						printf("\nEnter name and percentage to modify\n");
						scanf("%s%f",tname,&tmarks);

						strcpy(mod->name,tname);
						mod->marks=tmarks;

						printf("Details of modified records\n");
						printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
						return;

					}
					else
						mod=mod->next;
				}
			}
			printf("\nRollno not found\n");
			break;

// ================================== modify record using name ================================
		
		case 'n':
		case 'N':
			{
				printf("\nEnter name to modify\n");
				scanf("%s",s);
				SLL *mod=p;
				while(mod)
				{
					if(strcmp(mod->name,s)==0)
						nc++;
					mod=mod->next;
				}
				if(nc==1)
				{
					mod=p;
					while(mod)
					{
						if(strcmp(mod->name,s)==0)
						{
							printf("\nRecord found\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							printf("\nEnter name and percentage to modify\n");
							scanf("%s%f",tname,&tmarks);
							strcpy(mod->name,tname);
							mod->marks=tmarks;
							printf("Details of modified records\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							return;
						}
						else
							mod=mod->next;
					}
				}
				else if(nc>1)
				{
					mod=p;
					while(mod)
					{
						if(strcmp(mod->name,s)==0)
							printf("%d %s %f\n",mod->rollno,mod->name,mod->marks);
						mod=mod->next;
					}
					printf("\n!!!Multiple records found!!!\nEnter rollno to modify\n");
					scanf("%d",&n);
					mod=p;
					while(mod)
					{
						if(n==mod->rollno)
						{
							printf("\nRecord found\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							printf("\nEnter name and percentage to modify\n");
							scanf("%s%f",tname,&tmarks);

							strcpy(mod->name,tname);
							mod->marks=tmarks;

							printf("Details of modified records\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							return;
						}
						else
							mod=mod->next;
					}
				}
				printf("\nName not found\n");
			}
		break;

// ================================== modify record using percentage ================================
		
		case 'p':
		case 'P':
			{
				float f;int nc=0,n;
				printf("\nEnter percentage to modify\n");
				scanf("%f",&f);
				SLL *mod=p;
				while(mod)
				{
					if(mod->marks==f)
						nc++;
					mod=mod->next;
				}
				if(nc==1)
				{
					mod=p;
					while(mod)
					{
						if(mod->marks==f)
						{
							printf("\nRecord found\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							printf("\nEnter name and percentage to modify\n");
							scanf("%s%f",tname,&tmarks);
							strcpy(mod->name,tname);
							mod->marks=tmarks;
							printf("Details of modified records\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							return;
						}
						else
							mod=mod->next;
					}
				}
				else if(nc>1)
				{
					mod=p;
					while(mod)
					{
						if(mod->marks==f)
							printf("%d %s %f\n",mod->rollno,mod->name,mod->marks);
						mod=mod->next;
					}
					printf("\n!!!Multiple records found!!!\nEnter rollno to modify\n");
					scanf("%d",&n);
					mod=p;
					while(mod)
					{
						if(n==mod->rollno)
						{
							printf("\nRecord found\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							printf("\nEnter name and percentage to modify\n");
							scanf("%s%f",tname,&tmarks);
							strcpy(mod->name,tname);
							mod->marks=tmarks;
							printf("Details of modified records\n");
							printf("%d %s %.2f\n",mod->rollno,mod->name,mod->marks);
							return;
						}
						mod=mod->next;
					}
				}
				printf("\nPercentage not found\n");
			}
			break;
		default:printf("\nInvalid option\n");
	}
}

