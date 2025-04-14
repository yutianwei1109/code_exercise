//双链表实现
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

//链表初始化
void list_init(list_t* l)
{
    //特殊设计，使head与tail互相指向，方便后续节点增删
    l->head.data = 0;
    l->head.prev = NULL;
    l->head.next = &(l->tail);
    l->tail.data = 0;
    l->tail.prev = &(l->head);
    l->tail.next = NULL;
    //如用户使用动态内存分配list_t*由用户负责free()
}
//链表释放
void list_deinit(list_t* l)
{
    node_t* first = &(l->head);
    node_t* mid = first->next;
    node_t* last = NULL;
    while(mid != &(l->tail))
    {
        last = mid->next;
        free(mid);
        mid = last;
    }
    l->head.next = &(l->tail);
    l->tail.prev = &(l->head);
}
//头部插入
void list_insert_head(list_t* l, int data)
{
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->prev = &(l->head);
    new->next = l->head.next;
    l->head.next = new;
    new->next->prev = new;
}
//尾部插入
void list_insert_tail(list_t* l, int data)
{
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->prev = l->tail.prev;
    new->next = &(l->tail);
    new->prev->next = new;
    l->tail.prev = new;
}
//顺序插入 假设链表数据不重复，按从小到大排列
void list_insert_order(list_t* l, int data)
{
    node_t* new = malloc(sizeof(node_t));
    node_t* first = &(l->head);
    node_t* mid = first->next;
    while(data > mid->data && mid != &(l->tail))
    {
        first = mid;
        mid = mid->next;
    }
    new->data = data;
    new->prev = first;
    new->next = mid;
    first->next = new;
    mid->prev = new;
}
//删除节点 按数据筛选删除
void list_del(list_t* l, int data)
{
    node_t* first = &(l->head);
    node_t* mid = first->next;
    node_t* last = NULL;
    while(mid != &(l->tail))
    {
        if(data == mid->data)
        {
            last = mid->next;
            first->next = last;
            last->prev = first;
            free(mid);
            mid = last;
        }else{
            last = mid->next;
            first = mid;
            mid = mid->next;
        }
    }
}
//遍历链表
void list_travel(list_t* l)
{
    printf("从前向后:");
    for (node_t* p = l->head.next; p != &l->tail; p = p->next)
    {
        printf("%d ", p->data);
    }
    printf ("\n从后向前:");
    for (node_t* p = l->tail.prev; p != &l->head; p = p->prev)
    {
        printf("%d ", p->data);
    }
    printf("\n");
}
