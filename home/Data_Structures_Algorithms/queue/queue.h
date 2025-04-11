//队列声明
#ifndef _QUEUE_H_
#define _QUEUE_H_

//队列类型结构体声明
typedef struct{
    int* arr;
    int cap;
    int in;
    int out;
    int size;
}queue_t;

//队列初始化
void queue_init(queue_t* q, int cap);
//队列释放
void queue_deinit(queue_t* q);
//判断队满
int queue_full(queue_t* q);
//判断队空
int queue_empty(queue_t* q);
//入队
void queue_push(queue_t* q, int data);
//出队
int queue_pop(queue_t* q);

#endif //_QUEUE_H_