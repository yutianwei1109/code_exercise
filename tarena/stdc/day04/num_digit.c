#include <stdio.h>

int main()
{
    int num = 0;
    printf("输入一个整数:");
    scanf("%d", &num);
    int digit = 0;
    while(num /= 10) digit++;
    printf("输入的整数有%d位\n", digit + 1);

    return 0;
}
