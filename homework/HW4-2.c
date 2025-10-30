// P156 T5找float数组中的最大值函数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float findmax(float s[], int sizes) // 参数(浮点数组, 数组大小)找float数组中的最大值函数
{
    int i;
    float result = s[0];
    for (i = 0; i < sizes; i++)
    {
        result = s[i] > result ? s[i] : result;
    }
    return result;
}

int main()
{
    srand((unsigned)time(NULL));
    int sizes = 6;
    float s[6];
    printf("原数组={");
    int i;
    for (i = 0; i < sizes; i++)
    {
        s[i] = rand() + rand() / (RAND_MAX + 0.0f);    // 整数+小数
        s[i] = (rand() > RAND_MAX / 2) ? s[i] : -s[i]; // 随机正负号
        printf("%f", s[i]);
        if (i < sizes - 1)
        {
            printf(", ");
        }
    }
    printf("}\n");
    printf("最大值:%f", findmax(s, sizes));
    return 0;
}
