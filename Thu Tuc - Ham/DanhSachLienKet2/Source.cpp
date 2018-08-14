#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct node* ref;
struct node
{
	int key;
	ref next;
};
ref getNode(int k)
{
	ref p;
	p = (ref)malloc(sizeof(struct node));
	if (p == NULL)
	{
		printf("Loi khong du bo nho\n"); exit(0);
	}
	p->key = k;
	p->next = NULL;
	return p;
}
void addFist(ref &head, ref &tail, int k)
{
	ref p = getNode(k);
	if (head == NULL)
	{
		head = tail = p;
	}
	else
	{
		p->next = head;
		head = p;
	}
}
int main()
{
	int k;
	ref head = NULL, tail = NULL;
	while (1)
	{
		printf_s("Nhap so nguyen (nhap so 0 de thoat): ");
		scanf_s("%d", &k);
		if (k == 0)     break;
		addFist(head, tail, k);
	}
	_getch();
	return 0;
}










