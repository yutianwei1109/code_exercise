//函数指针
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int calc(int x, int y, int (*p)(int, int))
{
    //x = 3, y = 5, p = add
    //x = 4, y = 1, p = sub
    return p(x, y);
}

int main()
{
    //(1)调用第三方二进制文件
    //函数的名字表示函数的地址
    int (* pf)(int, int) = add;
    //通过函数指针调用函数
    printf("%d\n", p(3,5));

    //(2)多个同类型函数封装到一个函数中
    int val = calc(3, 5, add);
    printf("val = %d\n", val);
    int val1 = calc(4, 1, sub);
    printf("val1 = %d\n", val);
    int val2 = calc(5, 2, div);
    printf("val2 = %d\n", val);
    int val3 = calc(5, 2, mul);
    printf("val3 = %d\n", val);

    return 0;
}
