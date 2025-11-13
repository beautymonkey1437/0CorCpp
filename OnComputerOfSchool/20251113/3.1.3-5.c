// 特定数据查找
#include <stdio.h>
int main()
{
    int x, i, count = 0;
    // printf("(x=)");
    getchar();
    getchar();
    getchar();
    getchar();
    scanf("%d", &x);
    for (i = 100; i < 1000; i++)
    {
        if (i / 100 + (i / 10) % 10 + i % 10 == x)
        {
            count > 0 && count % 5 == 0 ? printf("\n") : count > 0 ? printf(",")
                                                                   : 0;
            printf("%d", i);

            count++;
        }
    }
    printf("符合各位上数字之和为%d的整数个数：%d", x, count);
}