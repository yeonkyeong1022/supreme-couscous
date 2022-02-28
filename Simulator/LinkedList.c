#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void ListInit(List * plist){
    plist->head = NULL;
    plist->tail = NULL;
    plist->cur = NULL;
    plist->numOfData = 0;
}

void LInsert(List * plist, Data data){
    Node * newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    if(plist->numOfData == 0)
        plist->head = newNode;
    else
        plist->tail->next = newNode;

    plist->tail = newNode;
    (plist->numOfData)++;
}

int LDelete(List * plist, Data data){
    if(plist->head == NULL)
        return FALSE;

    Node * delNode;
    Node * delNext;

    delNode = plist->head;
    delNext = delNode->next;
    if(plist->numOfData == 1){
        if(delNode->data == data){
            plist->head = plist->head->next;
            free(delNode);
            return TRUE;
        }
        return FALSE;
    }

    for(int i = 1; i<plist->numOfData; i++){
        if(delNext->data == data){
            delNode->next = delNext->next;
            free(delNext);
            (plist->numOfData)--;
            return TRUE;
        }
        delNode = delNext;
        delNext = delNext->next;
    }
    return FALSE;
}

void LPrint(List * plist){
    Node * cur;
    cur = plist->head;

    for (int i = 0; i<plist->numOfData; i++){
        printf("%d ", cur->data);
        cur = cur->next;
    }
    printf("\n");
}