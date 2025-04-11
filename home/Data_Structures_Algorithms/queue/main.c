//队列调用
#include <stdio.h>

#include "queue.h"

int main()
{
    //定义队列变量
    queue_t queue;
    queue_init(&queue, 5);

    //入队 1 2 3 4 5
    int data = 1;
    while (queue_full(&queue) != 1)
    {
        queue_push(&queue, data++);
    }

    //出队
    while (queue_empty(&queue) != 1) 
    {
        printf("%d ", queue_pop(&queue));
    }
    printf("\n");

    //释放队列
    queue_deinit(&queue);

    return 0;
}