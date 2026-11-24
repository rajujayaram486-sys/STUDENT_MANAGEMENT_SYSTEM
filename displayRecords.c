#include"header.h"

void showList(SLL *p)
{
	if(p==0)
	{
		printf("No student records present\n");
		return;
	}

	printf("--------------------------------------------\n");
	printf("Roll No.\tName\t\tPercentage\n");
	printf("--------------------------------------------\n");
	while(p)
	{
		printf("%-15d %-15s %-10.2f\n", p->rollno, p->name, p->marks);
		p=p->next;
	}
	printf("--------------------------------------------\n");

}

