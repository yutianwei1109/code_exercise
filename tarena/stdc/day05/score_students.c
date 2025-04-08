#include <stdio.h>

int main()
{
    int n = 0;//学生个数
    printf("输入学生个数:");
    scanf("%d", &n);
    float score[n];
    float sum = .0;
    float max = .0;
    printf("依次输入学生分数,一行一个\n");
    for(int i = 0; i < n; i++)
    {
        scanf("%f", &score[i]);
        sum += score[i];        
        if(max < score[i]) max = score[i];
    }
    printf("总分为%.1f\n", sum);
    printf("平均分为%.1f\n", sum / n);
    printf("最高分为%.1f\n", max);

    return 0;
}
