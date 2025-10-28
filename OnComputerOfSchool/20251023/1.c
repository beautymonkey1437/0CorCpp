#include <stdio.h>
int main()
{
    unsigned int i, n;            // n迭代次数
    unsigned t = 1;               // 选择类型
    float f_pi = 2.0, f_i = 1.0;  // float 6位小数
    double d_pi = 2.0, d_i = 1.0; // double 15
    // printf("输入迭代次数：");
    scanf("%u", &n);
    // printf("类型1float2double：");
    scanf("%u", &t);
    for (i = 0; i < n; i++)
    {
        switch (t)
        {
        case 1:
            f_pi *= 4.0 * f_i * f_i / (2 * f_i - 1) / (2 * f_i + 1);
            f_i += 1.0;
            break;
        case 2:
            d_pi *= 4.0 * d_i * d_i / (2 * d_i - 1) / (2 * d_i + 1);
            d_i += 1;
            break;
        }
    }
    switch (t)
    {
    case 1:
        printf("%.8f", f_pi);
        break;
    case 2:
        printf("%.16f", d_pi);
        break;
    }
    return 0;
}