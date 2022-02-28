#include <stdio.h>
#include "ListBaseStack.h"

int main(void){
    Stack stack;
    int command = 0, data;
    StackInit(&stack);
    
    printf("-Stack Simulator-\n----------\n0 : quit\n1 : push\n2 : pop\n3: peek\n----------\n");
    while (1){
        printf("------------\n");
        printf("select menu : ");
        scanf("%d", &command);
        switch(command){
            case 0:
                return 0;
            case 1:
                printf("push : ");
                scanf("%d", &data);
                SPush(&stack, data);
                break;
            case 2:
                printf("pop : %d\n", SPop(&stack));
                break;
            case 3:
                printf("peek : %d\n", SPeek(&stack));
                break;
            default:
                printf("no menu\n");
                break;
        }
        if(command == 0)
            break;
        printf("result : ");
        SPrint(&stack);
    }
    SRemove(&stack);
    
    return 0;
}