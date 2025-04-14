//链表声明
#ifndef _LIST_H_
#define _LIST_H_

typedef struct node //单链表节点
{
    int data;
    struct node* next;
}node_t;

typedef struct list //单链表首节点 head 尾节点tail
{
    node_t* head;
    node_t* tail;
}list_t;

//初始化单链表
void list_init(list_t* l);
//释放单链表
void list_deinit(list_t* l);
//头部插入节点
void list_insert_head(list_t* l, int data);
//尾部插入节点
void list_insert_tail(list_t* l, int data);
//中间插入节点
void list_insert(list_t* l, int data, node_t* target);
//遍历链表
void list_travel(list_t* l);
//尾部插入节点 通过遍历方式
void list_insert_tail_travel(list_t* l, int data);
//顺序插入节点 假设链表数据从小到大有序排列 无重复数据
void list_insert_order(list_t* l, int data);
//删除指定节点 按指针遍历
void list_delete_pointer(list_t* l, node_t* target);
//删除指定节点 按数据遍历
void list_delete_data(list_t* l, int data);
#endif //_LIST_H_ 