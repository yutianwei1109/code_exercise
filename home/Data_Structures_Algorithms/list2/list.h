//双链表声明
#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>

//双链表节点
typedef struct node
{
    int data;    
    struct node* prev;
    struct node* next;
}node_t;
//双链表
typedef struct list{
    node_t head;
    node_t tail;
}list_t;

//链表初始化
void list_init(list_t* l);
//链表释放
void list_deinit(list_t* l);
//头部插入
void list_insert_head(list_t* l, int data);
//尾部插入
void list_insert_tail(list_t* l, int data);
//顺序插入 假设链表数据不重复，按从小到大排列
void list_insert_order(list_t* l, int data);
//删除节点 按数据筛选删除
void list_del(list_t* l, int data);
//遍历链表
void list_travel(list_t* l);

#endif //_LSIT_H_ 