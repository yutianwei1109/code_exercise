#include <stdio.h>

int int_pow(int x, int n)
{
    int int_power = 1;
    for(int i = 0; i < n; i++) int_power *= x;
    return int_power;
}

int main()
{
    int count = 0;
    for(int i = 100; i <= 999; i++)
    {
        if(int_pow(i / 100, 3) + int_pow(i % 100 / 10, 3) + int_pow(i % 10, 3) == i)
        {
            printf("%d\n", i);
            count++;
        }
    }
    
    return 0;
}
