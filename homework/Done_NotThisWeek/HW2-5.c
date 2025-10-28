// P92 T16 在T15中正数检查，有一个非正数时，重新输入该数据直到为正数
#include <stdio.h>
int main()
{
    int m, n, temp;
    while (1)
    {
        printf("请输入两个整数，中间由一个字符分隔\n");
        scanf("%d%d", &m, &n);
        if ((n == 0) || (m == 0))
        {
            break;
        }
        while (m <= 0)
        {
            printf("第一个数为非正数，请重新输入正数\n");
            scanf("%d", &m);
        }
        while (n <= 0)
        {
            printf("第二个数为非正数，请重新输入正数\n");
            scanf("%d", &n);
        }
        while (temp = m % n)
        {
            m = n;
            n = temp;
        }
        printf("最大公约数为 %d\n", n);
    }
    printf("结束程序\n");
}
