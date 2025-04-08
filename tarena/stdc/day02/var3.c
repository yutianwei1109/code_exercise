#include <stdio.h>

int main()
{
    int a = 100, b = 200;
    int tmp = 0;
    tmp = b, b = a, a = tmp;
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
