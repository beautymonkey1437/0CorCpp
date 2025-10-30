// P156 T7求两个整数的最大公约数，最小公倍数
// 编写两个函数
// 主函数由键盘输入数字
#include <stdio.h>
int greatest_common_divisor(int a, int b) // 最大公约数
{
    int num = a > b ? b : a;                    // 先取较小值
    for (; a % num != 0 || b % num != 0; num--) // 公约数判断
    {
    }
    return num;
}

int least_common_multiple(int a, int b) // 最小公倍数
{
    int num = a > b ? a : b;                    // 先取较大值
    for (; num % a != 0 || num % b != 0; num++) // 公倍数判断
    {
    }
    return num;
}

int main()
{
    int a, b;
    printf("输入两个整数:\n");
    scanf("%d%d", &a, &b);
    printf("最大公约数:%d\n最小公倍数:%d\n", greatest_common_divisor(a, b), least_common_multiple(a, b));
    return 0;
}