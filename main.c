#include <stdio.h>
#include "SeqList\SeqList.h"
#include "LinkList\LinkList.h"

void SeqList_Run();
void LinkList_Run();

int main()
{
	//SeqList_Run();

	LinkList_Run();
	getchar();
	return 0;
}

void SeqList_Run() 
{
	SeqList L = SeqListInit();
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		Seq_Insert(L, i, i + 1);
	}
	for (i = 0; i < 5; i++)
	{
		Seq_Delete(L, 1);
	}
	printf("%d\n", L->Last);
	for (i = 0; i <= L->Last; i++)
	{
		printf("%d\n", L->Data[i]);
	}
}

void LinkList_Run() 
{
	LinkList L = NULL;
	L = LinkInit(L);
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		InsertLinkList(L, i, 1);
	}

	DeleteLinkList(L, 1);
	DeleteLinkList(L, 1);
	DeleteLinkList(L, 1);
	for (i = 0; i < GetLinkListLength(L); i++)
	{
		LinkElementType p = FindLinkListKth(L, i+1);
		printf("%d\n", p);
	}
}

