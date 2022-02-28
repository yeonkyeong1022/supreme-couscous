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

