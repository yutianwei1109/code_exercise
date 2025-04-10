//二级指针和指针数组
#include <stdio.h>

int main()
{
    char* arr[] = {"Hello", "World"};//arr[0] = p1, arr[1] = p2, arr是char**类型的指针
    char** parr = arr;

    printf("%s %s\n", arr[0], arr[1]);
    //parr存储数组arr退化成的二级指针，指向数组元素指针arr[0]的首地址，parr + 1指向指针arr[1]的首地址
    printf("%s %s\n", *parr, *(parr + 1));
    printf("%s %s\n", parr[0], parr[1]);//*parr等价于parr[0]，*parr + 1等价于parr[1]

    return 0;
}
