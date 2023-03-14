////////*****IMPLEMITATION.c****/////
#include"Stack.h"

#include<stdlib.h>
void CreateStack(Stack *ps)
{
ps->top=0;	
}

int Push(StackEntry e,Stack *ps)
{
	if(ps->top==0){
		return 0;
      	}
	else
		{
		ps->entry[ps->top++]=e;
	    retrun 1;
		}
}

int Pop(StackEntry *pe,Stack *ps)
{   if(ps->top==0)
    {return 0;}
    else{
	*pe=ps->entry[--ps->top];
	return 1;
	  }
}

int StackFull(Stack *ps)
{
	if(ps->top==MAXSTACK)return 1;
	else return 0;
}

int StackEmpty(Stack *ps)
{
	return !ps->top;
}

void StackTop(StackEntry *pe,Stack *ps)
{
   *pe=ps->entry[ps->top-1];	
}
 
int StackSize(Stack *ps)
{
	return ps->top;
} 

void ClearStack(Stack *ps)
{
	ps->top=0;
}

void TraverseStack(Stack *pe,void (* pf)(StackEntry))
{
	for(int i=MAXSTACK;i>=0;i--){
     (*pf)(ps->entry[i-1]);			
	}

}