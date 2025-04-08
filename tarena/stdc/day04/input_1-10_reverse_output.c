#include <stdio.h>

int main()
{
    printf("键盘输入1-10:");
    int a[10] = {0};
    int i;
    for(i = 0;i < 10; i++)
    {
        scanf("%d", &a[i]);
    }    
    for(i = 9;i >=0; i--)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
