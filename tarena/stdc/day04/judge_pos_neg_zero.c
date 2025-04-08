#include <stdio.h>

int main()
{
    printf("输入一个整数:");
    int num;
    scanf("%d", &num);
    if(num > 0)
    {
        printf("这个数是正数\n");
    }else if(num < 0)
    {
        printf("这个数是负数\n");
    }else
    {
        printf("这个数是零\n");
    }
    return 0;
}
