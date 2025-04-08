#include <stdio.h>

int main()
{
    printf("输入一个字母:");
    char ch;
    scanf("%c", &ch);
    ch = ch ^ 32;
    printf("%c\n", ch);

    return 0;
}
