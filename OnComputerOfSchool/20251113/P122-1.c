#include <stdio.h>
#define ELE_NUM 10
float findMaxEle(float[], int);
int main()
{
    int i;
    float ele[ELE_NUM], maxEle = 0.0;
    for (i = 0; i < ELE_NUM; i++)
    {
        scanf("%f", &ele[i]);
    }
    maxEle = findMaxEle(ele, ELE_NUM);
    printf("%f\n", maxEle);
    return 0;
}
float findMaxEle(float ele[], int num)
{
    float max = ele[0];
    int i;
    for (i = 1; i < num; i++)
    {
        if (ele[i] > max)
        {
            max = ele[i];
        }
    }
    return max;
}
