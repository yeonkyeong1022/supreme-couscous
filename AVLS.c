#include <stdio.h>
#include <stdlib.h>
#include "BinaryTree3.h"
#include "BinarySearchTree3.h"

int main(void){
    BTreeNode * bstRoot;
    BTreeNode * sNode;

    BSTMakeAndInit(&bstRoot);

    int data = -1, cmd;

    printf("데이터 입력(0 입력시 종료) : ");

    while(1){
        scanf("%d", &data);
        if(data==0)
            break;
        BSTInsert(&bstRoot, data);
    }

    printf("-AVL Search Simulator-\n----------\n0:quit 1:Insert 2:remove\n----------\n");
    while(cmd!=0){
        scanf("%d", &cmd);
        if(cmd == 0)
            break;

        switch(cmd){
        case 0:
            return 0;
        case 1: 
            printf("Insert: ");
            scanf("%d", &data);
            BSTInsert(&bstRoot, data);
            break;
        case 2:
            printf("Remove: ");
            scanf("%d", &data);
            BSTRemove(&bstRoot, data);
            break;
        default:
            printf("No Menu\n");
            break;
        }
        printf("----------------\n");
        BSTShowAll(bstRoot);
        printf("\n");
    }
    return 0;
}