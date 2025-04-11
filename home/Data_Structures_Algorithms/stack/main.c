//栈的调用
#include <stdio.h>

#include "stack.h"

int main()
{
    //定义栈
    stack_t stack;
    stack_init(&stack, 5);

    //压栈到栈满
    int data = 1;
    while(stack_full(&stack) != 1)
    {
        stack_push(&stack, data++);
    }

    //弹栈到栈空
    while(stack_empty(&stack) != 1)
    {
        printf("%d ", stack_pop(&stack));
    }
    printf("\n");

    //释放栈
    stack_deinit(&stack);

    return 0;
}