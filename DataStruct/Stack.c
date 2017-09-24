//#include<stdio.h>
//#include"Stack.h"
//
//
//void InitStack(Stack *pst, int cap) {
//	pst->stack = (int *)malloc(sizeof(int)*cap);
//	pst->top = 0;
//	pst->capacity = cap;
//}
//void UninitStack(Stack *pst) {
//	pst->top = 0;
//	free(pst->stack); //**동적메모리를 만들었기 때문에 꼭 메모리 삭제 해줘야함
//}
//
//void push(Stack *pst, int data) {
//	pst->stack[pst->top++] = data;
//}
//int pop(Stack *pst) {
//	return pst->stack[--pst->top];
//}
