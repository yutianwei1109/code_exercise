//链表调用
#include <stdio.h>
#include "list.h"

int main()
{
    list_t list;
    list_init(&list);
    //头部插入数据
    list_insert_head(&list, 30);
    list_insert_head(&list, 20);
    list_insert_head(&list, 10);
    //尾部插入数据
    list_insert_tail(&list, 60);
    list_insert_tail(&list, 80);
    list_insert_tail(&list, 100);
    //顺序插入
    list_insert_order(&list, 70);
    list_insert_order(&list, 40);
    list_insert_order(&list, 90);
    list_insert_order(&list, 50);
    list_insert_order(&list, 110);
    //遍历链表
    list_travel(&list);
    //删除节点 按数据筛选
    list_delete_data(&list, 100);

    //释放链表
    list_deinit(&list);

    return 0;
}