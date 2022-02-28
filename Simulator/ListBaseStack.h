#ifndef __LB_STACK_H__
#define __LB_STACK_H__

#define TRUE 1
#define FALSE 0
typedef int Data;

typedef struct _node{
    Data data;
    struct _node * next;
} Node;

typedef struct _listStack{
    Node * head;
} ListStack;

typedef ListStack Stack;

void StackInit(Stack * pstack);
int SIsEmpty(Stack * pstack);

void SPush(Stack * pstack, Data data);
Data SPop(Stack * pstack);
Data SPeek(Stack * pstack);

void SPrint(Stack * pstack);  // 스택 모든 데이터 출력
void SRemove(Stack * pstack); // 스택 모든 데이터 삭제

#endif