#include <stdio.h>
#include "queue.h"

void CreateQueue (Queue *pq)
{
 pq->size = pq->front= 0;
 pq->rear = -1 ;
}
void Appened (QueueEntry e , Queue*pq)
{
  pq->rear = (pq->rear +1) % maxQueue ;
  pq->entry[pq->rear] = e ;
  pq->size ++ ;
}
void Serve (QueueEntry *pe , Queue *pq)
{
  *pe = pq->entry[pq->front] ;
  pq->front = (pq->front +1) %maxQueue ;
  pq->size -- ;
}
int QueueEmpty (Queue *pq)
{
  return !(pq->size) ;
}
int QueueFull (Queue *pq)
{
  return(pq ->size == maxQueue);
}
int QueueSize(Queue*pq)
{
  return pq->size ;
}
void ClearQueue (Queue *pq)
{
  CreateQueue(pq);
}
void TraverseQueue (Queue*pq ,void (*pf)(QueueEntry))
{
   for(int pos =pq->front,s=0;s<pq->size;s++)
   {
     (*pf)(pq->entry[pos]);
     pos =(pos+1)%maxQueue;
   }
}