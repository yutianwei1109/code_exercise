#include <stdio.h>

int main()
{
    printf("输入一个秒数:");
    unsigned int sec = 0;
    scanf("%u", &sec);
    unsigned int min = 0, hour = 0;
    if(min = sec / 60) sec = sec % 60;
    if(hour = min / 60) min = min % 60;
    if(hour != 0) printf("%d小时", hour);
    if(min != 0) printf("%d分钟", min);
    printf("%d秒\n", sec);

    return 0;
}
