#include <stdio.h>

int main()
{
    FILE* fp = fopen("./file.txt", "r");
    if(fp == NULL)
    {
        printf("文件打开或创建失败\n");
        return -1;
    }

    char buf[16] = {};
    fread(buf, 1, sizeof(buf), fp);
    printf("%s", buf);

    fclose(fp);
    fp = NULL;

    return 0;
}