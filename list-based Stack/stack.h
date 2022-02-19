#include <stdlib.h>
#ifndef STACK
#define STACK
typedef int StackEntry ;
typedef struct StackNode
{
    StackEntry entry ;
    struct StackNode *next ;
}StackNode;
typedef struct Stack
{
    StackNode *top ;
    int size ;
}Stack ;
#endif
void	Push			(StackEntry, Stack *);
void	Pop				(StackEntry *, Stack *);
int		StackEmpty		(Stack *);
int		StackFull		(Stack *);
void	CreateStack		(Stack *);
void	StackTop		(StackEntry *, Stack *);
int		StackSize		(Stack *);
void	ClearStack		(Stack *);
void	TraverseStack	(Stack *, void (*)(StackEntry));