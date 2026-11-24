#include"header.h"

int countNode(SLL *p)
{
	int c=0;
	while(p) // to count no.of nodes
	{
		c++;
		p=p->next;
	}
	return c;
}

