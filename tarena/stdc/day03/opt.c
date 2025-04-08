#include <stdio.h>

int main()
{
    int a = 9, b = 5;
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d %% %d = %d\n", a, b, a % b);
    //printf("%d / 0 = %d\n", a, a / 0);不能对0除法
    //printf("%d %% 0 = %d\n", a, a % 0);不能对0取余
    return 0;
}
