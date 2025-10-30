// 实验P94-8-插入排序法
/*前 4 行表示排序后的结果，每个数需要向右对齐到 4 个字符宽。
接下来每行一个整数，表示查询的下标（从 0 开始），
或者字符串 "Not found"（不含引号）*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned seed;
    scanf("%u", &seed);
    srand(seed);
    int s[20] = {0};
    int i, j;
    int temp;
    int flag;
    for (i = 0; i < 20; i++)
    {
        temp = rand() % 101;
        for (j = i; j > 0 && temp < s[j - 1]; j--)
        {
            s[j] = s[j - 1];
        }
        s[j] = temp;
    }
    for (i = 0; i < 20; i++)
    {
        printf("%4d", s[i]);
        if (i % 5 == 4)
        {
            printf("\n");
        }
    }
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &temp);
        flag = 1;
        for (j = 0; j < 20; j++)
        {
            if (s[j] == temp)
            {
                printf("%d\n", j);
                flag = 0;
            }
        }
        if (flag)
        {
            printf("Not found");
        }
    }
    return 0;
}