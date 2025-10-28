// P92 T23
// 改成键盘输入所有坐标，先判断断点的关系（是否重合、X轴坐标是否相等）再计算斜率
// 3.5-1求两点所在直线的斜率的程序
#include <stdio.h>
#include <math.h>
int main()
{
    struct point
    {
        float x, y;
    };
    struct point p1, p2;
    printf("输入点p1的x坐标：");
    scanf("%f", &p1.x);
    printf("输入点p1的y坐标：");
    scanf("%f", &p1.y);
    printf("输入点p2的x坐标：");
    scanf("%f", &p2.x);
    printf("输入点p2的y坐标：");
    scanf("%f", &p2.y);
    if ((p2.x == p1.x) && (p2.y == p1.y)) // 都是从输入获取的值，==不会误差吧?
    {
        printf("两点重合, 无法计算斜率");
        return 0;
    }
    else
    {
        if (p2.x == p1.x) // 都是从输入获取的值，==不会误差吧?
        {
            printf("两点X坐标相等, 无法计算斜率");
            return 0;
        }
        else
        {
            printf("p1-p2直线的斜率是%f\n", (p2.y - p1.y) / (p2.x - p1.x));
        }
    }
    return 0;
}