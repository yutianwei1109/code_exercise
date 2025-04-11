//栈函数的实现
#include <stdio.h>
#include <stdlib.h>

#include "stack.h"

//栈的初始化
void stack_init(stack_t* s, int cap)
{
    s->arr = malloc(sizeof(int) * cap);
    s->cap = cap;
    s->top = 0;
}

//栈的释放
void stack_deinit(stack_t* s)
{
    free(s->arr);
    s->arr = NULL;
    s->cap = 0;
    s->top = 0;
}

//判断栈满
int stack_full(stack_t* s)
{
    return (s->top == s->cap);
}

//判断栈空
int stack_empty(stack_t* s)
{
    return (s->top == 0);
}

//压栈
void stack_push(stack_t* s, int data)
{
    s->arr[s->top++] = data;
}

//弹栈
int stack_pop(stack_t* s)
{
    return s->arr[--s->top];
}