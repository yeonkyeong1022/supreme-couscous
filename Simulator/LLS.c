#include <stdio.h>
#include "Linkedlist.h"

int main(void){
    int Mnum = 0, data;
    List list;
    ListInit(&list);

    printf("-Linked List Simulator-\n----------\n0 : quit\n1 : insert\n2 : delete\n----------\n");

    while(Mnum!=-1){
        printf("select menu : ");
        scanf("%d", &Mnum);
        switch (Mnum){
            case 0:
                return 0;
            case 1:
                printf("insert : ");
                scanf("%d", &data);
                LInsert(&list, data);
                break;
            case 2:
                printf("delet : ");
                scanf("%d", &data);
                if(LDelete(&list, data)==0)
                    printf("List Memory Error!\n");
                break;
            
        }
        printf("result : ");
        LPrint(&list);
        printf("------------\n");
    }

    return 0;
}