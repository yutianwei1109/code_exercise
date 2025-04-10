#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp = fopen("./file.txt", "w+");
    if(fp == NULL)
    {
        printf("文件打开或创建失败\n");
        return -1;
    }

    char buf[16] = "hello world!\n";
    fwrite(buf, 1, strlen(buf), fp);
    
    /*
    int fseek(FILE *_File, long _Offset, int _Origin)
    参数1   文件指针
    参数2   偏移量
    参数3   目标位置
            SEEK_SET    0   文件开头
            SEEK_CUR    1   当前位置
            SEEK_END    2   文件末尾
    */
    fseek(fp, 0, SEEK_SET);//等价于rewind(fp);将文件读写位置归零

    char data[16] = {};
    fread(data, 1, sizeof(data), fp);

    fclose(fp);
    fp = NULL;

    return 0;
}