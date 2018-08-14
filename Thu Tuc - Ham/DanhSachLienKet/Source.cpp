#include <stdio.h>
#include <conio.h>

struct NODE
{
	int key;
	NODE* pNext;
};
NODE* CreateNode(int Data)
{
	NODE* pNode;
	pNode = new NODE;
	if (pNode == NULL)
	{
		return NULL;
	}

	pNode->key = Data;
	pNode->pNext = NULL;
	return pNode;
}
bool AddHead(NODE* &pHead, int Data)
{
	NODE* pNode;
	pNode = CreateNode(Data);
	if (pNode == NULL)
	{
		return false;
	}
	else //if ( if pNode != NULL)
	{
		if (pHead == NULL)
		{
			pHead = pNode;
		}
		else // if (pHead != NULL)
		{
			pNode->pNext = pHead;
			pHead = pNode;
		}
		return true;
	}
}
int main()
{
	NODE* pRoot;
	pRoot = NULL;
	
	AddHead(pRoot, 1);
	
	_getch();
	return 0;
}