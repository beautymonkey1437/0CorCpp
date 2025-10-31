// P156 T3找立方根整数部分
#include <stdio.h>

int cube_root(double num)
{
    long long int i;
    int flag = 0;
    if (num < 0)
    {
        flag = 1;
        num = -num; // 变正
    }
    for (i = 0LL; i * i * i <= num; i++)
    {
    }
    i -= 1;            // 整数部分绝对值
    i = flag ? -i : i; // 输入负数时候，i变-i
    return i;
}

int main()
{
    double num;
    printf("输入一个数:");
    scanf("%lf", &num);
    printf("立方根整数部分:%lld", cube_root(num));
    return 0;
}