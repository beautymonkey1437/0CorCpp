// 分数约分
#include <stdio.h>
int greatest_common_divisor(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return greatest_common_divisor(b, a % b);
}

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    if (a <= 0 || b <= 0)
    {
        printf("分子分母必须为正整数");
        return 0;
    }
    c = greatest_common_divisor(a, b);
    if (c == 1)
    {
        printf("%d/%d为最简分数", a, b);
        return 0;
    }
    printf("%d/%d=%d/%d", a, b, a / c, b / c);
    return 0;
}