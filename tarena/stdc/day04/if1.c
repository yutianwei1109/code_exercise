#include <stdio.h>

int main()
{
    unsigned int salary = 0;
    printf("薪水:");
    scanf("%d", &salary);
    if(salary >= 30000) printf("飞机\n");
    else if(salary >= 10000) printf("高铁\n");
    else if(salary >= 5000) printf("高客\n");
    else if(salary >= 3000) printf("自行车\n");
    else printf("步行\n");
    
    return 0;
}
