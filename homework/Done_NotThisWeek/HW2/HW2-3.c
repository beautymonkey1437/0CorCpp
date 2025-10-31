// P91 T14 个人所得税分段累进计算方案
#include <stdio.h>
int main()
{
    double tax;
    double income; // double对较小的整数足够精确
    printf("输入收入一个月多少元：");
    scanf("%lf", &income);
    while (income > 0)
    {
        if (income <= 5000)
        {
            tax = 0;
        }
        else
        {
            if (income <= 8000)
            {
                tax = (income - 5000) * 0.03;
            }
            else
            {
                if (income <= 17000)
                {
                    tax = 90 + (income - 8000) * 0.1;
                }
                else
                {
                    if (income <= 30000)
                    {
                        tax = 90 + 900 + (income - 17000) * 0.2;
                    }
                    else
                    {
                        if (income <= 40000)
                        {
                            tax = 90 + 900 + 2600 + (income - 30000) * 0.25;
                        }
                        else
                        {
                            if (income <= 60000)
                            {
                                tax = 90 + 900 + 2600 + 2500 + (income - 40000) * 0.3;
                            }
                            else
                            {
                                if (income <= 85000)
                                {
                                    tax = 90 + 900 + 2600 + 2500 + 6000 + (income - 60000) * 0.35;
                                }
                                else
                                {
                                    tax = 90 + 900 + 2600 + 2500 + 6000 + 8750 + (income - 85000) * 0.45;
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("这个月该交个人所得税：%f元\n", tax);
        printf("输入收入一个月多少元：");
        scanf("%lf", &income);
    }
    return 0;
}

/*使用Switch
#include <stdio.h>
int main()
{
    double tax;
    double income; // double对较小的整数足够精确
    printf("输入收入一个月多少元：");
    scanf("%lf", &income);
    while (income > 0)
    {
        tax = 0;
        switch (income <= 5000 ? 1 :
            income <= 8000 ? 2 :
            income <= 17000  ? 3 :
            income <= 30000  ? 4 :
            income <= 40000  ? 5 :
            income <= 60000  ? 6 :
            income <= 85000  ? 7 : 8)//////////8个等级///////////
        {
        case 1:
            break;
        case 2:
            tax = (income - 5000) * 0.03;
            break;
        case 3:
            tax = 90 + (income - 8000) * 0.1;
            break;
        case 4:
            tax = 90 + 900 + (income - 17000) * 0.2;
            break;
        case 5:
            tax = 90 + 900 + 2600 + (income - 30000) * 0.25;
            break;
        case 6:
            tax = 90 + 900 + 2600 + 2500 + (income - 40000) * 0.3;
            break;
        case 7:
            tax = 90 + 900 + 2600 + 2500 + 6000 + (income - 60000) * 0.35;
            break;
        case 8:
            tax = 90 + 900 + 2600 + 2500 + 6000 + 8750 + (income - 85000) * 0.45;
            break;
        }

        printf("这个月该交个人所得税：%f元\n", tax);
        printf("输入收入一个月多少元：");
        scanf("%lf", &income);
    }
    return 0;
}
*/
