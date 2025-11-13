// P157 T23 递归，整数n，每位数分解，从高到低打印，一行一个数，负数要有负号
#include <stdio.h>

int from_high_to_low(int n)
{
    if (n < 0)
    {
        printf("-\n");
        n = -n;
    }
    if (n >= 10)//2位以上继续递归，个位数结束递归
    {
        printf("%d\n", from_high_to_low(n / 10));
    }
    return (n % 10);
}

int main()
{
    int n;
    printf("输入一个整数：");
    scanf("%d", &n);
    printf("%d", from_high_to_low(n));
    return 0;
}