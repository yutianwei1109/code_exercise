#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    if(argc != 3) //输入字符串数量检查
    {
        printf("Error:错误的输入格式\n请输入:%s <总头数[正整数]> <总脚数[正整偶数]>\n", argv[0]);
        return 1;
    }
    int heads = atoi(argv[1]);
    int feet = atoi(argv[2]);
    if(heads <= 0 || feet <= 0)
    {
        printf("Error:错误的输入参数\n输入的数量必须是正整数\n");
        return 1;
    }
    if(feet % 2 != 0)
    {
        printf("Error:错误的输入参数\n脚数必须是偶数\n");
        return 1;
    }
    if(heads > feet / 2 || heads < feet / 4)
    {
        printf("Unsolvable problem:脚数超出合理范围\n");
        return 1;
    }

    int rabbit = feet / 2 - heads;//(feet - heads * 2) / 2
    int chicken = heads - rabbit;
    printf("有%d只鸡和%d只兔子\n", chicken, rabbit);

    return 0;
}