//二级指针和命令行参数
#include <stdio.h>

int main(int argc, char* argv[])//char* argv[]等价于char** argv
{
    // ./pp2 hello 123
    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    printf("%lu\n", sizeof(argv));//char*[]类型的数组名等价于char**的指针

    return 0;
}
