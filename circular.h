include <stdio.h>

typedef struct Listnode{
	char data[4];
	struct Listnode *link;
}node;
typedef struct{
	node *head;
}node_h;

void insert(node_h *cl, char* x); 
void midinsert(node_h *cl, node* pre, char* x);
void fininsert(node_h* cl, node* old);
