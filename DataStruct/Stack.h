#pragma once
#ifndef _POINT_H_AWEASDFASDFAF
#define _POINT_H_AWEASDFASDFAF

typedef struct _stack_tag { //스텍 구조체로 만들기
	int **stack; //원소의 갯수 결정을 동적으로
	int top;
	int capacity;
}Stack;

void InitStack(Stack *pst, int cap);
void UninitStack(Stack *pst);
void push(Stack *pst, int data);
int pop(Stack *pst);


#endif // !_POINT_H_AWEASDFASDFAF
