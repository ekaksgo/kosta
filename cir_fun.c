#include "circlar.h"


void fristinsert(node_h *cl, char* x)
{
	node* new, *temp;
	new = (node*)malloc(sizeof(node));
	strcpy(new -> data,x);
	if (cl->head == NULL)//공백 리스트
	{
		cl->head = new;
		new ->link= new;
	}
	else
	{
		temp = cl->head;
		while(temp ->link == cl -> head)
			temp = temp -> link;
		new->link = temp -> link;
		temp ->link = new;
		cl ->head = new;
	}
}
void midinsert(node_h *cl, node* pre, char* x)
{
	
}
