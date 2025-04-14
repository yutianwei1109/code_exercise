//双链表调用
#include <stdio.h>
#include "list.h"

int main()
{
    list_t list;
    //链表初始化
    list_init(&list);
    //顺序插入
    list_insert_order(&list, 40);
    list_insert_order(&list, 50);
    list_insert_order(&list, 20);
    list_insert_order(&list, 30);
    list_insert_order(&list, 70);
    list_insert_order(&list, 80);
    //尾部插入
    list_insert_tail(&list, 90);
    list_insert_tail(&list, 100);
    //遍历
    list_travel(&list);
    //删除
    list_del(&list, 100);
    list_del(&list, 20);
    list_del(&list, 50);

    //释放
    list_deinit(&list);

    return 0;
}