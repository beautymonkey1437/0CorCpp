#include <stdio.h>

typedef struct index
{
    int s[10];
} indextype;
// 用digit的值来做索引排序//降序
indextype index_order(float digit[], int size)
{
    int i, j, k;
    indextype index = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}};
    for (i = 0; i < size; i++) // i为digit的索引
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (digit[index.s[j]] < digit[index.s[j + 1]])
            {
                k = index.s[j];
                index.s[j] = index.s[j + 1];
                index.s[j + 1] = k;
            }
        }
    }
    return index;
}
int main()
{
    indextype index;
    float digit[3] = {1.0, 8.0, 2.0};
    index = index_order(digit, 3);

    int i;
    for (i = 0; i < 3; i++)
    {
        printf("%f", digit[index.s[i]]);
    }

    return 0;
}
//////它工作！