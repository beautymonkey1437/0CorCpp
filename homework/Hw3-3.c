// 实验指导书P76 T20 找零问题

#include <stdio.h>
#include <math.h>

typedef struct
{
    int count;
    double left;
} CountAndLeft;

CountAndLeft find(CountAndLeft cal, double x) // cal结构体, x纸币面额, count找钱张数, left找余
{
    cal.count = 0;
    while (cal.left > x)
    {
        cal.count += 1;
        cal.left -= x;
    }
    return cal;
}

int main()
{
    double paid = 100.0;
    double price;
    double paper[8] = {100.0, 50.0, 20.0, 10.0, 5.0, 1.0, 0.5, 0.1}; // 纸币面额
    CountAndLeft cal;
    printf("请输入花费(单位:元):");
    scanf("%lf", &price);
    cal.left = paid - price;
    printf("找零%.1f元,方案:", cal.left);
    if (fmod(cal.left, 0.1) >= 0.05)
    {
        cal.left += 0.1;
    }
    // int count[8] = {0};
    int i;
    for (i = 0; i < 8; i++)
    {
        cal = find(cal, paper[i]);
        // count[i] = cal.count;
        //  printf("%.1f %d;", paper[i], count[i]); // debug
        if (cal.count)
        {
            printf("%.1f元%d张 ", paper[i], cal.count);
        }
    }
    return 0;
}
