// 选做题，某半径的*圆
#include <stdio.h>
#include <math.h>
int main()
{
    double radius;
    int x, y;
    int LengthText;
    // printf("输入半径：");
    // scanf("%lf", &radius);
    radius = 15;
    LengthText = (int)(radius * 2) + 1; // 圆的大小
    for (y = 0; y < LengthText; y++)
    {
        for (x = 0; x < LengthText; x++)
        {
            if (fabs(sqrt((x - radius) * (x - radius) + (y - radius) * (y - radius)) - radius) < 0.47)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
