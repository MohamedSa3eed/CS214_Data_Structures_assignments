#include "queue.h"
#include <stdlib.h>
void CreateQueue (Queue *pq)
{
    pq->front = NULL;
    pq->rear =NULL;
    pq->Size=0;
}
void Append (QueueEntry e ,Queue *pq)
{
    QueueNode * p = (QueueNode *)malloc(sizeof(QueueNode));
    p->next =NULL ;
    p->entry =e ;
    if(! pq->rear)
     { pq->front = p }
    else
     { pq->rear->next = p ; }
    pq->rear= p ;
    pq->Size ++ ;
}
void Serve (QueueEntry *pe , Queue *pq)
{
    QueueNode * p = pq->front ;
    *pe = pq->entry ;
    pq->front = pq->front->next;
    free (p);
    if(! pq->front )
    {
        pq->rear = NULL ;
    }
    pq->Size --;
}
int QueueEmpty(Queue * pq)
{
    return ! pq->Size ;
}
int QueueFull (Queue *pq)
{
    return 0;
}
int QueueSize (Queue *pq)
{
    return pq->Size;
}
void ClearQueue (Queue * pq)
{
    while (pq->front)
    {
        pq->rear = pq->front->next ;
        free(pq->front);
        pq->front =pq->rear;
    }
    pq->Size =0 ;
}
void TraverseQueue(Queue*pq,void(*pf)(QueueEntry))
{
    for (QueueNode * pn = pq->front;pn;pn =pn->next)
    {
        (*pf)(pn->entry);
    }
}