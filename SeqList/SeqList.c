#include <stdio.h>
#include <malloc.h>
#include "SeqList.h"

SeqList SeqListInit()
{
	SeqList L;
	L = (SeqList)malloc(sizeof(struct SeqLNode));
	L->Last = -1;
	return L;
}

SeqElementType Seq_FindKth(SeqList L, int X)
{
	SeqPosition i = 0;
	while (i <= L->Last && L->Data[i] != X)
	{
		i++;
	}
	if (i > L->Last) 
	{
		return ERROR;
	}
	else
	{
		return i;
	}
}

bool Seq_Insert(SeqList L, SeqElementType X, int i)
{
	//i代表插入元素的序号，从1开始，所有针对L->Last的第一个元素是i-1
	SeqPosition j;
	if (L->Last == MAXSIZE - 1)
	{
		printf("Seq List is Full");
		return false;
	}
	if (i < 1 || i > L->Last + 2) 
	{
		printf("the position is not valid");
		return false;
	}
	for ( j = L->Last; j >= i - 1 ; j--)
	{
		L->Data[j + 1] = L->Data[j];
	}

	L->Data[i - 1] = X;
	L->Last++;
	return true;
}

bool Seq_Delete(SeqList L, int i)
{
	SeqPosition j;

	if (i < 1 || i > L->Last + 1) 
	{
		printf("the position %d is out of array", i);
		return false;
	}
	for (j = i - 1; j <= L->Last; j++)
	{
		L->Data[j] = L->Data[j + 1];
	}
	L->Last--;
	return true;
}



