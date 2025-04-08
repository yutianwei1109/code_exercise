#include <stdio.h>

#define pi 3.14

int main()
{
    float r = 0;
    printf("输入圆的半径:");
    scanf("%f", &r);
    printf("圆的面积为%.2f,圆的周长为%.2f\n", pi * r * r, 2 * pi * r);

    return 0;
}
