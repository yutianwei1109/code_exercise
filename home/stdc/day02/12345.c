#include <stdio.h>

int main()
{
    /*
    printf("12345\n");
    printf("1234\n");
    printf("123\n");
    printf("12\n");
    printf("1\n");
    */
    int a = 12345;
    while(a)
    {
        printf("%d\n", a);
        a /= 10;
    }

    return 0;
}
