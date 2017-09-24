#pragma once
#ifndef _POINT_H_AWEASDFASDFAF
#define _POINT_H_AWEASDFASDFAF

typedef struct _stack_tag { //���� ����ü�� �����
	int **stack; //������ ���� ������ ��������
	int top;
	int capacity;
}Stack;

void InitStack(Stack *pst, int cap);
void UninitStack(Stack *pst);
void push(Stack *pst, int data);
int pop(Stack *pst);


#endif // !_POINT_H_AWEASDFASDFAF
