//////////*******STRUCT.H*****/////////
#ifndef STACH_H
#define STACH_H
#include<stdio.h>
///////////////////////////////////////////////
///////////**STACK BASED ON ARRAY**////////////
///////////////////////////////////////////////

// int MAXSTACK =100;
// typedef struct{
// 	StackEntey entry[MAXSTACK];
// 	int top;
// }Stack;

///////////////////////////////////////////////
///////////**STACK BASED ON LINKEDLIST**///////
///////////////////////////////////////////////
#define StackEntry int

typedef struct StackNode
{
StackEntry entry;
struct StackNode *next;

}StackNode;

typedef struct stack
{
    StackNode *top;
    int size;
}Stack;


void CreateStack(Stack *);
int Push(StackEntry ,Stack *);
int Pop(StackEntry *,Stack *);
int StackFull(Stack *);
int StackEmpty(Stack *);
void StackTop(StackEntry *,Stack *);
int StackSize(Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *,void (* )(StackEntry));


#endif