//枚举
#include <stdio.h>

int main()
{
    enum color{RED, BLUE = 3, GREEN, YELLOW, BLACK, ORANGE, PURPLE};
    enum color c = BLUE;

    printf("c = %d\n", c);
    printf("%d%d%d\n", RED, BLACK, PURPLE);

    return 0;
}
