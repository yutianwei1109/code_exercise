//二级指针练习
#include <stdio.h>

//对二级指针对应的存储区进行交换操作
void swap_pointer(char** pp1, char** pp2)
{
    char* ptmp = NULL;
    ptmp = *pp1, *pp1 = *pp2, *pp2 = ptmp;
}

int main()
{
    char* p1 = "hello";
    char* p2 = "world";
    swap_pointer(&p1, &p2);
    printf("%s %s\n", p1, p2);

    return 0;
}
