//队列实现
#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

//队列初始化
void queue_init(queue_t* q, int cap)
{
    q->arr = malloc(sizeof(int) * cap);
    q->cap = cap;
    q->in = 0;
    q->out = 0;
    q->size = 0;
}
//队列释放
void queue_deinit(queue_t* q)
{
    free(q->arr);
    q->arr = NULL;
    q->cap = 0;
    q->in = 0;
    q->out = 0;
    q->size = 0;
}
//判断队满
int queue_full(queue_t* q)
{
    return (q->size ==  q->cap);
}
//判断队空
int queue_empty(queue_t* q)
{
    return (q->size == 0);
}
//入队
void queue_push(queue_t* q, int data)
{
    q->arr[q->in++] = data;
    if(q->in == q->cap) q->in = 0;
    q->size++;
}
//出队
int queue_pop(queue_t* q)
{
    int data = q->arr[q->out++];
    if(q->out == q->cap) q->out = 0;
    q->size--;
    return data;
}