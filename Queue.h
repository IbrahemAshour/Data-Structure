#ifndef QUEUE_H
#define QUEUE_H
#include<stdio.h>
#define QueueEntry int
///////////////////////////////////////////////
//////////////**QUEUE BASED ON ARRAY**/////////
///////////////////////////////////////////////
#define MAXQUEUE 100
typedef struct {
QueueEntry entry[MAXQUEUE];
int front;
int rear; 
int size;

}Queue;
void  Append(QueueEntry ,Queue *);
///////////////////////////////////////////////
///////////**QUEUE BASED ON LINKEDLIST**///////
///////////////////////////////////////////////

// typedef struct queuenode
// {
//   QueueEntry entry;
//   struct queuenode *next;
// }QueueNode;

// typedef struct queue
// {
//     QueueNode *front;
//     QueueNode *rear;
//     int size;
// }Queue;
//int Append(QueueEntry ,Queue *);


void Serve (QueueEntry *,Queue *);
int QueueEmpty(Queue *);
int QueueFull(Queue *);
int QueueSize(Queue *);
void ClearQueue (Queue *);
void CreateQueue(Queue *);
void TraverseQueue (Queue *,void (*)(QueueEntry));




#endif