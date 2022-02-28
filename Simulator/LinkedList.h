#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node{
    Data data;
    struct _node * next;
} Node;

typedef struct _linkedList{
    Node * head;
    Node * tail;
    Node * cur;
    int numOfData;
} LinkedList;

typedef LinkedList List;

void ListInit(List * plist);
void LInsert(List * plist, Data data);

int LDelete(List * plist, Data data); //데이터 삭제(반환 x)
void LPrint(List * plist); //리스트 목록 출력

#endif