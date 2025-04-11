//栈的头文件
#ifndef _STACK_H_
#define _STACK_H_

#include <stdio.h>

//栈类型结构体的声明
typedef struct{
    int* arr;//存储区地址
    int cap;//容量
    int top;//栈顶
}stack_t;

//栈的初始化
void stack_init(stack_t* s, int cap);

//栈的释放
void stack_deinit(stack_t* s);

//判断栈满
int stack_full(stack_t* s);

//判断栈空
int stack_empty(stack_t* s);

//压栈
void stack_push(stack_t* s, int data);

//弹栈
int stack_pop(stack_t* s);

#endif //_STACK_H_