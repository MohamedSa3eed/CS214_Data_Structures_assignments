#ifndef QUEUE 
#define QUEUE
#define maxQueue 10
typedef int QueueEntry ;
typedef struct queue 
{
  int front ;
  int rear ;
  int size;
  QueueEntry entry[maxQueue] ;
}Queue;
void CreateQueue (Queue *);
void Appened (QueueEntry  , Queue * );
void Serve (QueueEntry * ,Queue *);
int QueueEmpty (Queue *);
int QueueFull (Queue *);
int QueueSize(Queue*);
void ClearQueue (Queue *);
void TraverseQueue (Queue* ,void (*) (QueueEntry));
#endif