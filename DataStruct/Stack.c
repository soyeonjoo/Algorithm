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
//	free(pst->stack); //**�����޸𸮸� ������� ������ �� �޸� ���� �������
//}
//
//void push(Stack *pst, int data) {
//	pst->stack[pst->top++] = data;
//}
//int pop(Stack *pst) {
//	return pst->stack[--pst->top];
//}
