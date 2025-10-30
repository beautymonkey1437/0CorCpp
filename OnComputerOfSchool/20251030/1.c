// 实验P92-2-统计所有正整数的个数
#include <stdio.h>
int main()
{
    int numbers;
    int numlist[1000] = {0};
    int numcount[1000] = {0};
    printf("有几个正整数？");
    scanf("%d", &numbers);
    int i;
    printf("请输入%d个正整数：", numbers);
    for (i = 0; i < numbers; i++)
    {
        scanf("%d", &numlist[i]);
        numcount[numlist[i]] += 1;
    }
    for (i = 0; i < numbers; i++)
    {
        if (numcount[i])
        {
            printf("%d出现%d次\n", i, numcount[i]);
        }
    }
    return 0;
}