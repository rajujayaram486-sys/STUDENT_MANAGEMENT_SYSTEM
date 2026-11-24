#include"header.h"

void deallocation(SLL **);

void exitFile(SLL **p)
{
	char c;
	printf("\ns/S)Save and exit e/E)Exit\n");
	printf("Enter option\n\n");
	scanf(" %c",&c);
	switch(c)
	{

// ======================= Save data in file deallocate memory and exit ==========================
		
		case 's':
		case 'S':
			{
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
				deallocation(p);
				printf("\nsaved data and ");
				return;
			}
			break;

// ======================= Deallocate memory and exit without saving in file ===================
		
		case 'e':
		case 'E':
			{
				printf("\nExited without saving and ");
				deallocation(p);
			}
			return;
			break;
		default:printf("\nInvalid option\n");
	}
}

// ======= Function to deallocate memory =====================

void deallocation(SLL **p)
{
    SLL *del;
    while(*p)
    {
        del = *p;
        *p = (*p)->next;
        free(del);
    }
    printf("nodes deallocated successfully\n");
}


