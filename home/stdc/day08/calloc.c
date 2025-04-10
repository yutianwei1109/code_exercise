//动态内存分配
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = calloc(5, sizeof(int));//calloc会将存储区初始化为0；
    if(p == NULL)
    {
        printf("内存分配失败\n");
        return -1;
    }

    for(int i = 0; i < 5; i++)
    {
        p[i] = 100 + i;
        printf("%d ", p[i]);
    }
    printf("\n");

    free(p);
    p = NULL;

    return 0;
}
