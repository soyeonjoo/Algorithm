//#include<stdio.h>
//#include<stdlib.h>
//#include"Stack.h"
//
///* 2. 큐*/
//typedef struct _queue {
//	int* queue;
//	int head;
//	int tail;
//	int capacity;
//}Queue;
//
//void InitQueue(Queue *pque, int cap) {
//	pque->queue = (int *)malloc(sizeof(int)*cap);
//	pque->head = 0;
//	pque->tail = 0;
//	pque->capacity = cap;
//
//}
//void UninitQueue(Queue *pque) {
//	pque->head = 0;
//	pque->tail = 0;
//	free(pque->queue);
//
//}
//int queue_is_empty(Queue q) {
//	if (q.head == q.tail) return 1;
//	return 0;
//	
//}
//
//void enQueue(Queue *pque, int data) {
//	pque->queue[pque->head++ ] = data;
//	printf("ENQUEUE: %d\n", data);
//	pque->head = pque->head % 5;
//
//}
//
//int deQueue(Queue *pque) {
//	int data;
//	if (queue_is_empty(*pque)) {
//		printf("queue is empty!");
//		return 1;
//	}
//	data = pque->queue[pque->tail++];
//	printf("DEQUEUE: %d\n", data);
//
//	pque->tail = pque->tail % 5;
//	return data;
//}
//
//void main() {
//
//	/* 2017-04-04 자료구조 스택 & 큐 */
//
//	/* 1. 스텍 (동적메모리, 구조체 사용) 
//	Stack stack1;
//	Stack stack2;
//
//
//	InitStack(&stack1,5);
//	InitStack(&stack2,5);
//	
//	push(&stack2, 100000);
//
//	push(&stack1, 1000);
//	push(&stack1, 2000);
//	push(&stack1, 3000);
//
//	
//	printf("%d\n", pop(&stack1));
//	printf("%d\n", pop(&stack1));
//	printf("%d\n", pop(&stack1));
//
//	printf("%d\n", pop(&stack2));
//
//	UninitStack(&stack1);
//	UninitStack(&stack2);
//
//
//	Stack arrayStack[100]; // 100개의 stack만들기
//	InitStack(&arrayStack[0],5);
//	push(&arrayStack[0], 10);
//	push(&arrayStack[0], 20);
//	push(&arrayStack[0], 30);
//	printf("%d\n",pop(&arrayStack[0]));
//	UninitStack(&arrayStack[0]);
//	*/
//
//	Queue que1;
//	InitQueue(&que1,5);
//
//	enQueue(&que1, 100);
//	enQueue(&que1, 200);
//	enQueue(&que1, 300);
//	enQueue(&que1, 400);
//
//	deQueue(&que1);
//	deQueue(&que1);
//	deQueue(&que1);
//	deQueue(&que1);
//
//	UninitQueue(&que1);
//	
//
//}