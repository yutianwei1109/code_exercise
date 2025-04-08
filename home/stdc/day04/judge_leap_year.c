#include <stdio.h>

int main()
{
    int year = 0;
    printf("Input a year number:");
    scanf("%d", &year);
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 !=0))) printf("Leap year\n");
    else printf("Common year\n");
    return 0;
}
