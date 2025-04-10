//二级指针和命令行参数
#include <stdio.h>

int main(int argc, char* argv[])//char* argv[]等价于char** argv
{
    // ./pp2 hello 123
    for(int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    //char*[]类型的数组作为函数参数时会退化为char**类型的的指针
    /*
    VScode Warning
    warning: 'sizeof' on array function parameter 'argv' will return size of 'char **' [-Wsizeof-array-argument]
        printf("sizeof(argv)[main?= %lu\n", sizeoff(argv));
    */
    printf("sizeof(argv) = %lu\n", sizeof(argv));//sizeof(argv) = 8
    char* ch[4];
    printf("sizeof(ch) = %lu\n", sizeof(ch));//sizeof(ch) = 32

    return 0;
}
