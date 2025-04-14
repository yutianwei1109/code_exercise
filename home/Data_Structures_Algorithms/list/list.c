//链表实现
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

/**
 * 初始化单链表，带首节点
 * @param l 链表指针
 */
void list_init(list_t* l)
{
    l->head = malloc(sizeof(node_t));
    l->tail = malloc(sizeof(node_t));
    l->head->data = 0;
    //特殊设计，初始化时将head->next指向tail，方便后续插入时不需要做额外处理
    l->head->next = l->tail;
    l->tail->data = 0;
    l->tail->next = NULL;
}
/**
 * 释放单链表
 * @param l 链表指针
 */
void list_deinit(list_t* l)
{
    node_t* cur = l->head;
    node_t* next = NULL;
    while(cur)
    {
        next = cur->next;
        free(cur);
        cur = next;
    }
    l->head = NULL;
    l->tail = NULL;
    //如果用户使用动态内存创建list_t*，则由用户负责free()
}
//头部插入节点
void list_insert_head(list_t* l, int data)
{
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->next = l->head->next;
    l->head->next = new;
}
//尾部插入节点
void list_insert_tail(list_t* l, int data)
{
    node_t* new = malloc(sizeof(node_t));
    new->data = 0;
    new->next = NULL;
    l->tail->data = data;
    l->tail->next = new;
    l->tail = new;
}
//中间插入节点
void list_insert(list_t* l, int data, node_t* target)
{
    node_t* new = malloc(sizeof(node_t));
    new->data = data;
    new->next = target->next;
    target->next = new;
}
//遍历链表
void list_travel(list_t* l)
{
    node_t* p = l->head->next;
    while(p != l->tail)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}
//尾部插入节点 通过遍历方式 假设list_t中const node_t* tail定义
void list_insert_tail_travel(list_t* l, int data)
{
    node_t* new = malloc(sizeof(node_t));
    node_t* cur = l->head;
    while(cur->next != l->tail)
    {
        cur = cur->next;
    }
    new->data = data;
    new->next = l->tail;
    cur->next = new;
}
//顺序插入节点 假设链表数据从小到大有序排列 无重复数据
void list_insert_order(list_t* l, int data)
{
    node_t* new = malloc(sizeof(node_t));
    node_t* prev = l->head;
    node_t* cur = prev->next;
    while(cur != l->tail && data > cur->data)
    {
        prev = cur;
        cur = cur->next;
    }
    new->data = data;
    new->next = cur;
    prev->next = new;
}
//删除指定节点 按指针遍历
void list_delete_pointer(list_t* l, node_t* target)
{
    node_t* prev = l->head;
    node_t* cur = prev->next;
    while(cur != l->tail && cur != target)
    {
        prev = cur;
        cur = cur->next;
    }
    if(cur == target)
    {
        prev->next = cur->next;
        free(cur);
        cur = prev->next;
    }
}
//删除指定节点 按数据遍历
void list_delete_data(list_t* l, int data)
{
    node_t* prev = l->head;
    node_t* cur = prev->next;
    while(cur != l->tail)
    {
        if(data == cur->data)
        {
            prev->next = cur->next;
            free(cur);
            cur = prev->next;
        }else{
            prev = cur;
            cur = cur->next;
        }        
    }
}