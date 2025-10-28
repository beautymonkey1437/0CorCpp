#include <stdio.h>
int main()
{
    int ix;
    float fx;
    float fy;
    int iy;
    printf("输入一个整数:");
    scanf("%d", &ix);
    if (ix < 0 || ix >= 30)
    {
        printf("x输入错误, 要求0<=x<30\n");
        return 0;
    }
    switch (0 <= ix && ix < 10 ? 1 : 10 <= ix && ix < 20 ? 2
                                                         : 3)
    {
    case 1:
        iy = ix;
        break;
    case 2:
        iy = ix * ix + 1;
        break;
    case 3:
        iy = ix * ix * ix + ix * ix + 1;
    }
    printf("x=%d, y=%d\n", ix, iy);
    printf("输入一个实数:");
    scanf("%f", &fx);
    if (fx < 0 || fx >= 30)
    {
        printf("x输入错误, 要求0<=x<30\n");
        return 0;
    }
    if (0 <= fx && fx < 10)
    {
        fy = fx;
    }
    else if (10 <= fx && fx < 20)
    {
        fy = fx * fx + 1;
    }
    else if (fx < 30)
    {
        fy = fx * fx * fx + fx * fx + 1;
    }
    printf("x=%f, y=%f\n", fx, fy);
    return 0;
}