
## 자료구조 알고리즘 통합 시뮬레이터
###### 가온누리 자료구조 스터디


### 시뮬레이터 구현
<details>
<summary>Simulator.c 코드</summary>
<div markdown="1">

```c
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
 ```
	
</div>
</details>
	
#### 1. 메뉴 선택 가능한 콘솔창
- 사용자로부터 정수(1~7)을 입력받아 메뉴를 선택할 수 있도록 함.
	

#### 2. 메뉴 화면으로 돌아가기
- system 함수 활용
	- 프로세스 단위로 시뮬레이터를 실행한 뒤 프로세스를 종료하며 이전 메뉴화면으로 돌아오도록 함.
	
<img src="https://user-images.githubusercontent.com/89283563/155839020-6cce8a36-1496-40e9-b23c-2903539dbefd.gif" width="400" height="400"/> 
	
---
	
### Makefile
- 코딩 과정 중에 반복되는 명령어 입력을 생략하기 위한 Makefile 생성
<details>
<summary>Makefile 코드</summary>
<div markdown="1">

```c
CC=gcc
CFLAGS=-g -Wall
TARGET=STS.out
OBJ=LBS.o STS.o


LLS.out : LL.o LLS.o
	gcc -o LLS.out LL.o LLS.o
LL.o : LinkedList.c
	gcc -c -o LL.o LinkedList.c
LLS.o : LLS.c
	gcc -c -o LLS.o LLS.c

STS.out : LBS.o STS.o
	gcc -o STS.out LBS.o STS.o
LBS.o : ListBaseStack.c
	gcc -c -o LBS.o ListBaseStack.c
STS.o : STS.c
	gcc -c -o STS.o STS.c
	


QS.out : LBQ.o QS.o
	gcc -o QS.out LBQ.o QS.o
LBQ.o : ListBaseQueue.c
	gcc -c -o LBQ.o ListBaseQueue.c
QS.o : QS.c
	gcc -c -o QS.o QS.c


PQS.out : PQS.o UH.o PQ.o
	gcc -o PQS.out PQS.o UH.o PQ.o
PQS.o : PQS.c
	gcc -c -o PQS.o PQS.c
PQ.o : PriorityQueue.c
	gcc -c -o PQ.o PriorityQueue.c
UH.o : UsefulHeap.c
	gcc -c -o UH.o UsefulHeap.c


AVLS.out : AVLS.o BT.o BST.o AVLRe.o
	gcc -o AVLS.out AVLS.o BT.o BST.o AVLRe.o
AVLS.o : AVLS.c
	gcc -c -o AVLS.o AVLS.c
BT.o : BinaryTree3.c
	gcc -c -o BT.o BinaryTree3.c
BST.o : BinarySearchTree.c
	gcc -c -o BST.o BinarySearchTree3.c
AVLRe.o : AVLRebalance.c
	gcc -c -o AVLRe.o AVLRebalance.c


HTS.out : HTS.o DLL2.o P.o T.o
	gcc -o HTS.out HTS.o DLL2.o P.o T.o
HTS.o : HTS.c
	gcc -c -o HTS.o HTS.c
DLL2.o : DLinkedList2.c
	gcc -c -o DLL2.o DLinkedList2.c
P.o : Person.c
	gcc -c -o P.o Person.c
T.o : Table2.c
	gcc -c -o T.o Table.c

Simulator.out : Simulator.c
	gcc -o Simulator.out Simulator.c

SS.out : SS.c 
	gcc -o SS.out SS.c


 ```

</div>
</details>
	
- 위와 같은 Makefile 덕분에 명령어 하나로 원하는 .out 파일을 선택하여 컴파일링 가능

