#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

typedef struct student
{
	int rollno;
	char name[50];
	float marks;
	struct student *next;
} SLL;

void addRecords(SLL **);
void deleteRecords(SLL **);
void showList(SLL *);
void modifyList(SLL *);
void saveRecords(SLL **);
void sortRecords(SLL *);
void deleteAllRecords(SLL **);
void reverseList(SLL **);
int countNode(SLL *);
void exitFile(SLL **);
void loadRecords(SLL **);

