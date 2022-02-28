#include <stdio.h>
#include <stdlib.h>
#include "Person.h"
#include "Table2.h"

int MyHashFunc(int k){
    return k%100;
}

int main(void){
    Table myTbl;
    Person * np;
    Person * sp;
    Person * rp;

    int cmd = -1, Snum, i = 0, j;
    int Srch[100];
    char name[10], adr[10];

    TBLInit(&myTbl, MyHashFunc);
    system("clear\n");
    printf("-Hash Table Simulator-\n----------\n0: Quit | 1: Insert | 2: Delete\n----------\n");

    while(cmd!=0){
        scanf("%d", &cmd);
        switch(cmd){
        case 0:
            return 0;
        case 1:
            printf("Insert : ");
            scanf("%d %s %s", &Snum, name, adr);
            np = MakePersonData(Snum, name, adr);
            TBLInsert(&myTbl, GetSSN(np), np);
            Srch[i++] = Snum;
            break;
        case 2:
            printf("Delete : ");
            scanf("%d", &Snum);
            rp = TBLDelete(&myTbl, Snum);
            if(rp != NULL)
                free(rp);
            break;
        case 3:
            for(j = 0; j<=i; j++){
                sp = TBLSearch(&myTbl, Srch[j]);
                if(sp != NULL)
                    ShowPerInfo(sp);
            }
            break;
        default:
            printf("No Menu\n");
            break;
        }
        TBLPrintf(&myTbl);
        printf("\n");
        printf("------------------\n");
    }

    for(j = 0; j<= i; j++){
        rp = TBLDelete(&myTbl, Srch[j]);
        if(rp != NULL)
            free(rp);
    }

    return 0;
}