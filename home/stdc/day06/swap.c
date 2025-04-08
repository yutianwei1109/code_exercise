#include <stdio.h>

void swap(int* x, int* y)
{
    int tmp = 0;
    tmp = *x, *x = *y, *y = tmp;
}

int main()
{
    int a = 100, b = 200;
    swap(&a, &b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
