#include <stdio.h> 
#include "stack.h"
void Display(StackEntry e)
{
    printf("element is %d\n" ,e) ;
}
int main()
{
    Stack s;
    StackEntry e ;
    CreateStack(&s);
    ClearStack(&s);
    scanf("%d",&e);
    if(!StackEmpty(&s))
    {
        Push(e,&s);
    }
    if (!StackEmpty(&s))
    {
        Pop(&e,&s);
    }
    printf("%d\n",e);
    printf("stack size is %d\n",StackSize(&s));
    
    return 0 ;
}
