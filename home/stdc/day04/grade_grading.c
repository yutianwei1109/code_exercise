#include <stdio.h>

int main()
{
    int score = 0;
    printf("Input your score:");
    scanf("%d", &score);
    switch (score / 10)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("E\n");
    }
        return 0;
}
