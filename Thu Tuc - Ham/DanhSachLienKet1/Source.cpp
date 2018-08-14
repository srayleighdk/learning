#include <stdio.h>
#include <conio.h>
struct NODE
{
	int key;
	NODE* pNext;
};
struct SLIST
{
	NODE* pHead;
	NODE* pTail;
};
NODE* CreateNode(int Data)
{
	NODE* pNode;
	pNode = new NODE;
	if (pNode = NULL)
	{
		return NULL;
	}
	pNode->key = Data;
	pNode->pNext = NULL;
	return pNode;
}
bool AddHead(SLIST& list, int Data)
{
	NODE* pNode;
	pNode = CreateNode(Data);
	if (pNode == NULL)
	{
		return false;
	}
	else
	{
		if (list.pHead == NULL)
		{
			list.pHead = pNode;
			list.pTail = pNode;
		}
		else
		{
			pNode->pNext = list.pHead;
			list.pHead = pNode;
		}
		return true;
	}
}
int main()
{
	SLIST list;
	list.pHead = NULL;
	list.pTail = NULL;

	AddHead(list, 1);
	AddHead(list, 2);
	AddHead(list, 3);
}











