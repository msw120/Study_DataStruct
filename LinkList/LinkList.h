#ifndef _LINKLIST_H_
#define _LINKLIST_H_

#define ERROR -1
#define bool int
#define true 1
#define false 0
typedef int LinkElementType;
typedef struct LinkLNode* LinkPtrToLNode;
struct LinkLNode 
{
	LinkElementType Data;
	LinkPtrToLNode Next;
};
typedef LinkPtrToLNode LinkPosition;
typedef LinkPtrToLNode LinkList;

LinkPosition LinkInit(LinkList L);

int GetLinkListLength(LinkList L);

LinkElementType FindLinkListKth(LinkList L, int K);

LinkPosition FindLinkList(LinkList L, LinkElementType X);

bool InsertLinkList(LinkList L, LinkElementType X, int i);

bool DeleteLinkList(LinkList L, int i);

#endif // !_LINKLIST_H_

