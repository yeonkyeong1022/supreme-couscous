#include <stdio.h>
#include "PriorityQueue.h"

int DataPriorityComp(char ch1, char ch2){
    return ch2-ch1;
}

int main(void){
    PQueue pq;
    int Com = 1;
    char data;
    PQueueInit(&pq, DataPriorityComp);
    printf("----------\n0 : Quit\n1 : Enqueue\n2 : Dequeue\n------------\n");
    while(Com!=0){
        scanf("%d", &Com);
        switch(Com){
            case 0 :
                return 0;
            case 1 :
                scanf("%c", &data);
                PEnqueue(&pq, data);
                break;
            case 2 :
                if(PQIsEmpty(&pq)){
                    printf("Memory Error!\n");
                    break;
                }
                printf("Dequeue : %c\n", PDequeue(&pq));
                break;
            default :
                printf("No Menu!\n");
                break;
        }
        printf("result : ");
        Print(&pq);
        printf("------------\n");
    }
    return 0;
    
}