#include <stdio.h>
#include <stdlib.h>

int main(void){
    int cmd = 1;
    while(cmd!=0){
        system("clear\n");
        printf("-Simulator-\n**********\n0: quit\n1: LinkedList\n2: Stack\n3: Queue\n4: Priority Queue\n5: Sort\n6: AVL\n7: Hash Table\n**********\n");
        scanf("%d", &cmd);
        switch(cmd){
        case 0:
            break;
        case 1:
            system("clear\n");
            system("./LLS.out\n");
            break;
        case 2:
            system("clear\n");
            system("./STS.out\n");
            break;
        case 3:
            system("clear\n");
            system("./QS.out\n");
            break;
        case 4:
            system("clear\n");
            system("./PQS.out\n");
            break;
        case 5:
            system("clear\n");
            system("./SS.out\n");
            break;
        case 6:
            system("clear\n");
            system("./AVLS.out\n");
            break;
        case 7:
            system("clear\n");
            system("./HTS.out\n");
            break;
        default:
            printf("no menu.\n");
        }
        
    }
    return 0;
}