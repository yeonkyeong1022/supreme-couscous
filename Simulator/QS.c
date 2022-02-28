#include <stdio.h>
#include "ListBaseQueue.h"

int main(void){
    Queue q;
    int Command = 0, data;
    QueueInit(&q);
    printf("-Queue Simulator-\n----------\n0 : quit\n1 : EnQueue\n2 : DeQueue\n3  Qpeek\n----------\n");
    while(1){
        scanf("%d", &Command);
        switch(Command){
            case 0:
                return 0;
            case 1:
                printf("enqueue : ");
                scanf("%d", &data);
                Enqueue(&q, data);
                break;
            case 2:
                printf("delete : %d\n", Dequeue(&q));
                break;
            case 3:
                printf("%d\n", Qpeek(&q));
                break;
            default:
                printf("no menu\n");

        }
        printf("result : ");
        QPrint(&q);
        printf("-----------\n");
        if(Command == 0) break;
    }
    
    return 0;
}