#include "stack.h"
void Push (StackEntry e ,Stack *ps)
{
   ps->entry[ps->top ++] = e ;
}
void CreateStack (Stack *ps)
{
    ps->top =0 ;
}
void Pop (StackEntry *e ,Stack *ps )
{
    *e = ps->entry[--ps->top];
}
void ClearStack (Stack *ps)
{
   (*ps).top = 0 ;
}
int StackSize (Stack *ps)
{
    return ((*ps).top) ;
}
int	StackFull (Stack *ps)
{
    return ((ps->top) >= (MAXSTACK)) ;
}
int StackEmpty (Stack *ps)
{
    return ps->top <= 0 ;
}
void StackTop (StackEntry *e, Stack *ps)
{
    *e =ps->entry[(ps->top)-1];
}
void TraverseStack (Stack *ps, void (*pf)(StackEntry))
{
  for(int i = ps->top-1;i>0;i--)
  {
      (*pf)(ps->entry[i-1]);
  }
}