#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp = fopen("./file.txt", "w");
    if(fp == NULL)
    {
        printf("文件打开或创建失败\n");
        return -1;
    }

    char buf[16] = "hello world!\n";
    fwrite(buf, 1, strlen(buf), fp);

    fclose(fp);
    fp = NULL;

    return 0;
}