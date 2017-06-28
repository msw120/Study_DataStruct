#include <stdio.h>
#include <malloc.h>
#include "LinkList.h"


LinkPosition LinkInit(LinkList L) 
{
	L = (LinkPosition)malloc(sizeof(struct LinkLNode));
	L->Data = -1;
	L->Next = NULL;
	return L;
}

int GetLinkListLength(LinkList L)
{
	LinkPosition p;
	int cnt = 0;
	p = L;
	while (p)
	{
		p = p->Next;
		cnt++;
	}
	return cnt - 1;
}

LinkElementType FindLinkListKth(LinkList L, int K)
{
	LinkPosition p;
	int cnt = 0;
	p = L;
	while (p && cnt < K)
	{
		p = p->Next;
		cnt++;
	}
	if ((cnt == K) && p) 
	{
		return p->Data;
	}
	else
	{
		return ERROR;
	}
}

LinkPosition FindLinkList(LinkList L, LinkElementType X)
{
	LinkPosition p = L;
	while (p && p->Data != X)
	{
		p = p->Next;
	}
	if (p) 
	{
		return p;
	}
	else
	{
		return NULL;
	}
}

bool InsertLinkList(LinkList L, LinkElementType X, int i)
{
	LinkPosition tmp, pre;
	int cnt = 0;
	pre = L;
	while (pre && cnt< i - 1)
	{
		pre = pre->Next;
		cnt++;
	}
	if (pre == NULL || cnt != i - 1) 
	{
		printf("insert position is error");
		return false;
	}
	else
	{
		tmp = (LinkPosition)malloc(sizeof(struct LinkLNode));
		tmp->Data = X;
		tmp->Next = pre->Next;
		pre->Next = tmp;
		return true;
	}
}

bool DeleteLinkList(LinkList L, int i)
{
	LinkPosition tmp, pre;
	int cnt = 0;

	pre = L;
	while (pre && cnt < i - 1)
	{
		pre = pre->Next;
		cnt++;
	}
	if (pre == NULL || cnt != i - 1 || pre->Next == NULL) 
	{
		printf("delete position is error");
		return false;
	}
	else
	{
		tmp = pre->Next;
		pre->Next = tmp->Next;
		free(tmp);
		return true;
	}
}