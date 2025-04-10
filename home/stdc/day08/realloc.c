//动态内存分配 重新分配
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = malloc(8);//malloc不会初始化存储区
    if(p == NULL)
    {
        printf("内存分配失败\n");
        return -1;
    }

    *p = 10;
    *(p + 1) = 20;

    printf("%d %d\n", p[0], p[1]);

    p = realloc(p, 16);

    p[2] = 30;
    p[3] = 40;
    printf("%d %d\n", p[2], p[3]);

    free(p);//释放内存
    p = NULL;//指针置空

    return 0;
}
