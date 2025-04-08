//编写程序,通过键盘输入矩形的长和宽的值,输出对应的面积

#include <stdio.h>

int main()
{
    int length = 0, width = 0;
    printf("Input the length and width of rectangle:");
    scanf("%d%d", &length, &width);
    printf("The area is %d\n", length * width);

    return 0;
}
