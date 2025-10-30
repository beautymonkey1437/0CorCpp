// P156 T3找立方根整数部分
#include <stdio.h>
int main()
{
    double num;
    long long int i;
    printf("输入一个数:");
    scanf("%lf", &num);
    int flag = 0;
    if (num < 0)
    {
        flag = 1;
        num = -num;
    }
    for (i = 0LL; i * i * i <= num; i++)
    {
    }
    i -= 1;            // 整数部分绝对值
    i = flag ? -i : i; // 输入负数时候，i变-i
    printf("立方根整数部分:%lld", i);
    return 0;
}