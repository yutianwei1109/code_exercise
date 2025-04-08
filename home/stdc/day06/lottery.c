#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int a[6] = {0};
    int i = 0;
    int j;
    int num = 0;
    while(i != 6)
    {
        flag = 0;
        num = rand() % 33 + 1;
        for(j = 0; j < i; j++)
        {
            if (num == a[j]) break;
        }
        if (j == i)
        {
            printf("%d ", a[i] = num);
            i++;
        }
    }
    printf("- 红球\n");
    printf("%d - 蓝球\n", rand() % 16 + 1);

    return 0;
}
