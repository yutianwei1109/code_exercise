#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argc != 3)
    {
        printf("错误的输入格式！\n");
        printf("输入示例:%s <用户名> <密码>\n", argv[0]);
        return 1;
    }

    const char username[] = "sunwukong";
    const char password[] = "123456";

    if(strcmp(username, argv[1]) == 0 && strcmp(password, argv[2]) == 0)
    {
        printf("登录成功!\n");
    }else
    {
        printf("登录失败!用户名或密码错误\n");
    }

    return 0;
}
