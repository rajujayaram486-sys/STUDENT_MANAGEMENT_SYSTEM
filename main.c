#include "header.h"

void mainMenu(void);

int main()
{
	char op;
	SLL *head=0;
	loadRecords(&head);
	while(1)
	{
		mainMenu();
		scanf(" %c",&op);
		switch(op)
		{
			case 'a':
			case 'A': addRecords(&head);
					  break;
			case 'd':
			case 'D': deleteRecords(&head);
					  break;
			case 's':
			case 'S': showList(head);
					  break;
			case 'm':
			case 'M': modifyList(head);
					  break;
			case 'v':
			case 'V': saveRecords(&head);
					  break;
			case 't':
			case 'T': sortRecords(head);
					  break;
			case 'l':
			case 'L': deleteAllRecords(&head);
					  break;
			case 'r':
			case 'R': reverseList(&head);
					  break;
			case 'e':
			case 'E':
					  exitFile(&head);
					  return 0;
					  break;
			default:  printf("Invalid option\n");
		}
	}
}

void mainMenu()
{
	printf("\na/A)addRecords d/D)deleteRecords s/S)showList m/M)modifyList v/V)saveRecords\n");
	printf("t/T)sortRecords l/L)delete all records r/R)reverseList e/E)exit\n");
	printf("\nEnter option\n");
}

