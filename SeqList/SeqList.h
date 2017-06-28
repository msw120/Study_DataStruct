#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#define MAXSIZE 20
#define ERROR -1
#define bool int
#define true 1
#define false 0
typedef int SeqElementType;
typedef int SeqPosition;
typedef struct SeqLNode* SeqPtrToLNode;
struct SeqLNode
{
	SeqElementType Data[MAXSIZE];
	//数组实际使用的长度,Last的第一个元素下标为0
	SeqPosition Last;
};
typedef SeqPtrToLNode SeqList;

SeqList SeqListInit();

SeqElementType Seq_FindKth(SeqList L, int X);

bool Seq_Insert(SeqList L, SeqElementType X, int i);

bool Seq_Delete(SeqList L, int i);

#endif // _SEQLIST_H_

