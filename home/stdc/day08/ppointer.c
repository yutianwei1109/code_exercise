//二级指针
#include <stdio.h>

int main()
{
    int a = 10;
    int* p = &a;
    int** pp = &p;

    printf("a = %d\n", a);
    printf("a = %d\n", *p);
    printf("a = %d\n", **pp);

    printf("p = %#p\n", p);
    printf("p = %#p\n", *pp);

    return 0;
}
