#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
}pt_t;

typedef struct{
    pt_t p1;
    pt_t p2;
}rect_t;

float calc_area(rect_t rect)
{
    float width = fabsf(rect.p1.x - rect.p2.x);
    float height = fabsf(rect.p1.y - rect.p2.y);
    return width * height;
}

pt_t calc_midp(rect_t rect)
{
    pt_t point;
    point.x = (rect.p1.x + rect.p2.x) / 2;
    point.y = (rect.p1.y + rect.p2.y) / 2;
    return point;
}

int main()
{
    rect_t rect1;
    printf("请输入矩形点1的坐标(x,y):");
    scanf("%f,%f", &rect1.p1.x, &rect1.p1.y);
    printf("请输入矩形点2的坐标(x,y):");
    scanf("%f,%f", &rect1.p2.x, &rect1.p2.y);

    //计算面积
    printf("点(%.2f, %.2f)和点(%.2f, %.2f)组成的矩形面积为%.2f", rect1.p1.x, rect1.p1.y, rect1.p2.x, rect1.p2.y, calc_area(rect1));

    //求中点
    pt_t point = calc_midp(rect1);
    printf("点(%.2f, %.2f)和点(%.2f, %.2f)的中点为(%.2f, %.2f)", rect1.p1.x, rect1.p1.y, rect1.p2.x, rect1.p2.y, point.x, point.y);

    return 0;
}
