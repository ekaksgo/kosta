#include "circular.h"

int main(void)
{
	list_h* cl;
	node* p;

	cl = createlist_h();

	printf("1. 원형 리스트 생성하기\n");
	printlist(cl);


	printf("2. 원형 리스트에 [월]노드 삽입하기 \n");
	firstinsert(cl, "월");	
	printlist(cl);

	printf("3. 원형 리스트의 [월] 노드 뒤에 [수] 노드 삽입하기\n");
	p = search(cl,"월");
	midinsert(cl,p,"수");
	printlist(cl);

	printf("4. 원형 리스트의 [수] 노드 뒤에 [금] 노드 삽입하기\n");
	p = search(cl,"수");
	midinsert(cl,p,"금");
	printlist(cl);

	printf("5. 원형 리스트에서 [수] 노드 삭제하기\n");
	p = search(cl,"수");
	deletnode(cl, p);
    printlist(cl);
	
	getchar();
	return 0;
}
