#include <stdio.h>
#include <string.h>
#include "circular.h"

list_h* createlist_h(void)
{
	list_h* cl;
	cl = (list_h*)malloc(sizeof(list_h));
	cl -> head = NULL;
	return cl;
}

void printlist(list_h* cl)
{
	node* p;
	printf("cl =(");
	p= cl -> head;
	if (p ==NULL)
	{
		printf(")");
	}
	do
	{
		printf("%s", p->data);
		p = p ->link;
		if(p != cl -> head)
		{
			printf(", ");
		}
	}while(p != cl -> head);
	printf("\n");
}

void firstinsert(list_h *cl, char* x)
{
	node* new; 
	node* temp;
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
			new -> link = temp -> link;
			temp -> link = new;
		cl ->head = new;
	}
}
void midinsert(list_h *cl, node* pre, char* x)
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
void deletnode(list_h* cl, node* old)
{
	node* pre;
	if(cl -> head ==NULL) return;
	if(cl->head ->link == cl ->head){
		free(cl->head);
		cl -> head =NULL;
		return;
	}

	else if (old ==NULL)
		return;
	else
	{
		pre =cl -> head;
		while (pre ->link != old)
		{
			pre = pre -> link;
		}
		pre -> link = old -> link;
		if (old ==cl -> head)
			cl -> head =old ->link;
		free(old);
	}
}
node* search(list_h cl, char* x)
{
	node* temp;
	temp = cl -> head;

	if(temp==NULL) 
		{
			return NULL;
		}
	do
	{
		if (strcmp(temp->data,x)==0)
			{
				return temp;
			}
		else
			{
				temp = temp -> link;
			}

	} while( temp != cl->head);
	
	return NULL;
}


























