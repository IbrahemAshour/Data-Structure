
#include<stdlib.h>
#include"Stack.h"


void CreateStack(Stack *ps){
    ps->top=NULL;
    ps->size=0;
}

int Push(StackEntry e,Stack *ps)
{ StackNode *pn=(StackNode *)malloc(sizeof(StackNode));
if(!pn){
    return 0;
}
 else{
    pn->entry=e;
    pn->next=ps->top;
    ps->top=pn;
    ps->size++;
  }
}

int Pop(StackEntry *pe,Stack *ps)
{
    *pe=ps->top->entry;
     StackNode *pn;
     pn=ps->top;
     ps->top=ps->top->next;
     free(pn);
     ps->size--;
}

int StackEmpty(Stack *ps)
{
    return !ps->top;
}

int StackFull(Stack *ps){
    return 0;
}

void ClearStack(Stack *ps)
{
    StackNode *pn=ps->top;
    while(pn)
    {
     pn=pn->next;
     free(ps->top);
     ps->top=pn;
    }
    ps->size=0;
}
void TraverseStack(Stack *ps,void(*pf)(StackEntry))
{
// StackNode *pn=ps->top;
// while(pn){
//     (*pf)(pn->entry);
//     pn=pn->next;
// }
for(StackNode *pn=ps->top;pn;pn=pn->next){
     (*pf)(pn->entry);
}
}
int StackSize(Stack *ps){
    return ps->size;
}