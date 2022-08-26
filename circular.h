#include <stdio.h>
#include <string.h>

typedef struct Listnode{
	char data[4];
	struct Listnode *link;
}node;
typedef struct{
	node *head;
}list_h;

//list_h* createlist_h(void);
void firstinsert(list_h *cl, char* x); 
void midinsert(list_h *cl, node* pre, char* x);
void fininsert(list_h* cl, node* old);
