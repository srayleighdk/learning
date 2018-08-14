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
		printf_s("Loi khong du bo nho\n");
	}
	p->key = k;
	p->next = NULL;
	return p;
}
void addFist(ref &head, ref & tail, int k)
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
void addLast(ref &head, ref &tail, int k)
{
	ref p = getNode(k);
	if (head == NULL)
	{
		head = tail = p;
	}
	else
	{
		tail->next = p;
		tail = p;
	}
}
void DuyetDS(ref head)
{
	ref p;
	if (head == NULL)
	{
		printf_s("Danh sach rong\n");
	}
	else
		for (p = head; p; p = p->next)
			printf_s("%d\n", p->key);
}
void destroyList(ref &head)
{
	ref p;
	while (head)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
void main()
{
	int k;
	ref head = NULL, tail = NULL;
	while (1)
	{
		printf_s("Nhap so nguyen (Nhap so 0 de thoat): ");
		scanf_s("%d", &k);
		if (k == 0) break;
		addFist(head, tail, k);
	}
	DuyetDS(head);
	destroyList(head);
	DuyetDS(head);
	_getch();
}