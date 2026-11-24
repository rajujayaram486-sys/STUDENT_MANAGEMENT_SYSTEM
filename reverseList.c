#include"header.h"

void reverseList(SLL **p) // Reverse the links completely not only data
{
	int i,c=countNode(*p);
	printf("count=%d\n",c);
	SLL **a=malloc(sizeof(SLL *)*c);
	SLL *t=*p;

	for(i=0;i<c;i++,t=t->next)
		a[i]=t;

	for(i=c-1;i>0;i--)
		a[i]->next=a[i-1];
	
	a[0]->next=0;
	*p=a[c-1];
}

