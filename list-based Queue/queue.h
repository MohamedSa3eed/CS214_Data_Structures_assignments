#ifndef QUEUE_H
#define QUEUE_H
typedef int QueueEntry ;
typedef struct queuenode
{
    QueueEntry entry ;
    struct queuenode *next ;
}QueueNode;
typedef struct queue
{
    QueueNode *front ;
    QueueNode * rear ;
    int Size ;
}Queue;
void CreateQueue (Queue *);
void Append (QueueEntry  ,Queue *);
void Serve (QueueEntry * , Queue *);
int QueueEmpty(Queue *);
int QueueFull (Queue *);
int QueueSize (Queue *);
void ClearQueue (Queue *);
void TraverseQueue(Queue * ,void(*)(QueueEntry));
#endif