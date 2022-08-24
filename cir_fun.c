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
	node* new;
	new = (node*)malloc(sizeof(node));
	strcpy(new ->data,x);
	if(cl ->head == NULL)
	{
		cl -> head =new;
		new -> link = new;
	}
	else {
		new->link = pre->link;
		pre -> link = new;
	}	
}
void fininsert(node_h* cl, node* old)
{
	node* new;
	if(cl -> head ==NULL) return;
	if(cl->head ->link == cl ->head){
		free(cl->head);
		cl -> head =NULL;
		return;
	}

	else if (pld ==NULL)
		return;
	else
	{
		pre =cl -> head;
		wheile (pre ->link != old)
		{
			pre = pre -> link;
		}
		pre -> link = old -> link;
		if (old ==cl -> head)
			cl -> head =old ->link;
		free(old);
	}
}
