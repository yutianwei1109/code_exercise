#include <stdio.h>

int main()
{
    FILE* fp = fopen("./file.txt", "w+");
    if(fp == NULL)
    {
        printf("文件打开或创建失败\n");
        return -1;
    }

    fclose(fp);
    fp = NULL;

    return 0;
}