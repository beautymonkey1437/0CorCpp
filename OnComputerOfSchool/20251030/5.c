/*有一个背包最大可以容纳**x重量**的物品，
现在有**n个物品**，均有各自的**重量**和**价值**。
问如何将这些物品装入这个背包里，使得
背包里物品的价值最大，且其重量不能超过背包的最大容量。

问题说明：1)0-1背包问题：每种物品仅1个，
不可拆分，只能全部装入或不装入；
2)部分背包问题：每种物品仅1个，可以拆分，
可以全部装入或按重量(也可按比例)拆分后装入。

编程要求:1）用贪心法分别按价值和单位重量价值
（物品的价值除以物品的重量）求解0-1背包问题，不需要得到最优解；
2）用贪心法按单位重量价值求解部分背包问题。
3）输入n个（3≤ n ≤10）物品的编号、
重量和价值、以及背包可以容纳的重量x，
可以不按顺序输入，但程序里须根据需要进行排序。*/
#include <stdio.h>

typedef struct index
{
    int s[10];
} indextype;
// 用digit的值来做索引排序//降序
indextype index_order(float digit[], float size)
{
    int i, j, k;
    indextype index = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}}; // 索引数组
    for (i = 0; i < size; i++)
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
    indextype index; // 使用方式：index.s[i]使用例子：index=index_order(digit, x);
    // printf("输入背包的容量：");
    float x; // 当作size用
    scanf("%f", &x);
    // printf("输入物品的数量：");
    int n;
    scanf("%d", &n);
    int num[10] = {0};
    // printf("输入3个物品的编号：");
    int i, j, k, l, m;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    float weight[10];
    // printf("输入3个物品的重量：");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &weight[i]);
    }
    float value[10];
    // printf("输入3个物品的价值："); ////TODO1这些标点！
    for (i = 0; i < n; i++)
    {
        scanf("%f", &value[i]);
    }
    float vw[10]; // 价值:重量比
    for (i = 0; i < n; i++)
    {
        vw[i] = value[i] / weight[i];
    }

    // printf("0-1背包问题的按价值贪心法求解:"); // 只能选或者不选，不能拆！////TODO2这些标点！
    ////////
    float w;
    printf("\n"); // TODO检查
    index = index_order(value, x);
    float totalvalue = 0;
    for (w = 0, i = 0; w < x && i < n;) // w代表已经选中的数量
    {

        if (weight[index.s[i]] + w <= x)
        {
            w += weight[index.s[i]];
            totalvalue += value[index.s[i]];
            printf("%d号物品 重量:%f 价值:%f装入背包\n", num[index.s[i]], weight[index.s[i]], value[index.s[i]]); // 3号物品 重量:3.000000 价值:120.000000装入背包
        }

        i += 1;
    }
    printf("装入背包的物品总价值为：%f\n", totalvalue);
    ////////TODO要计算总价等等
    // printf("0-1背包问题的按价值除以重量贪心法求解:");
    /*
    w = 0;
    printf("\n"); // TODO检查
    index = index_order(vw, x);
    totalvalue = 0;
    for (w = 0, i = 0; w < x && i < n;) // w代表已经选中的重量
    {

        if (weight[index.s[i]] + w <= x)
        {
            w += weight[index.s[i]];
            totalvalue += value[index.s[i]];
            printf("%d号物品 重量:%f 价值:%f,单位价值%f,装入背包\n", num[index.s[i]], weight[index.s[i]], value[index.s[i]]), vw[index.s[i]];
        }
        i += 1;
    }
    printf("装入背包的物品总价值为：%f\n", totalvalue);
    // printf("部分背包问题的按价值除以重量贪心法求解:");
    w = 0;
    printf("\n"); // TODO检查
    index = index_order(vw, x);
    totalvalue = 0;
    for (w = 0, i = 0; w < x && i < n;) // w代表已经选中的重量
    {
        if (weight[index.s[i]] + w <= x)
        {
            w += weight[index.s[i]];
            totalvalue += value[index.s[i]];
            printf("%d号物品 重量:%f 价值:%f,单位价值%f,装入背包\n", num[index.s[i]], weight[index.s[i]], value[index.s[i]], vw[index.s[i]]);
        }
        else
        {
            totalvalue += (x - w) * vw[index.s[i]];
            printf("%d号物品 重量:%.2f 价值%.2f,单位价值%.2f,其中%.2f重价值%.2f装入背包\n", num[index.s[i]], weight[index.s[i]], value[index.s[i]], vw[index.s[i]], x - w, (x - w) * vw[index.s[i]]);
            w = x;
        }
        i += 1;
    }
    printf("装入背包的物品总价值为：%f\n", totalvalue);
    */
    return 0;
}