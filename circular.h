
typedef struct Listnode{
	char data[4];
	struct Listnode *link;
}node;
typedef struct{
	node *head;
}list_h;

list_h* createlist_h(void);
void printlist(list_h* cl);
void firstinsert(list_h *cl, char* x); 
void midinsert(list_h *cl, node* pre, char* x);
void deletnode(list_h* cl, node* old);
node* search(list_h cl, char* x);
