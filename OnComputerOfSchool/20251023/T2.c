#include <stdio.h>

int main() // 练习4:设计购房贷款按揭计算程序
{
    char ctrl;                                                         // 用于程序菜单控制，'s'-进入贷款计算，'e'-退出程序
    float h_area = 0, h_price = 0, h_cash = 0, h_rate = 0, h_year = 0; /*购房面积,单价,首付比例,贷款利率和年限*/
    unsigned int loan_month;                                           // 贷款月数
    float loan_sum, loan_mon_rate;                                     // 贷款总额,月利率
    float mon_pay, pay_sum = 0;                                        // 月还款金额,总还款金额
    int h_type = 1;                                                    // 贷款按揭方式:0-等额本息,1-等额本金
    float t;                                                           // 临时变量
    int i;                                                             // 循环变量

    // 死循环,程序一直运行
    while (1)

    {
        printf("\ns - 房贷计算\ne - 退出程序\n"); // 提示菜单
        scanf(" %c", &ctrl);                      // 输入一个字符到ctrl变量

        if (ctrl == 's') // 计算房贷
        {
            printf("(1)输入购房面积\n"); // 提示
            scanf("%f", &h_area);        // 输入房屋面积
            printf("(2)输入购房单价\n");
            scanf("%f", &h_price); // 输入购房单价
            printf("(3)输入购房首付比例(x)%%\n");
            scanf("%f", &h_cash); // 输入购房首付比例
            printf("(4)输入贷款利率(x)%%\n");
            scanf("%f", &h_rate); // 输入贷款利率,仅百分率
            printf("(5)输入贷款年限\n");
            // 输入贷款年限
            scanf("%f", &h_year);

            printf("(6)输入贷款按揭方式：0-等额本息，1-等额本金\n");
            scanf("%d", &h_type);

            loan_mon_rate = h_rate / 100.0 / 12; // 计算月利率
            loan_month = h_year * 12;            // 计算贷款月数
            // 计算贷款总额
            loan_sum = h_area * h_price * (1 - h_cash / 100);

            printf("贷款总额为:%.2f\n", loan_sum);

            pay_sum = 0.0; // 初始化总还款金额

            // 等额本息还款方式

            if (h_type == 0)
            {
                t = 1.0;
                for (i = 0; i < loan_month; i++) // 计算每月还款金额的因数
                    t *= (1 + loan_mon_rate);

                mon_pay = loan_sum * loan_mon_rate * t / (t - 1); // 计算每月还款金额
                // 计算总还款金额

                pay_sum = mon_pay * loan_month;

                printf("等额本息按揭方式每月还款金额为：%.2f\n", mon_pay);
                printf("等额本息按揭方式总还款金额为：%.2f\n", pay_sum);
            }
            else if (h_type == 1) // 等额本金还款方式
            {
                printf("等额本金按揭方式每月还款金额列表：\n");

                // 计算每月还款金额

                for (i = 0; i < loan_month; i++)
                {
                    // 计算每月还款金额

                    mon_pay = loan_sum / loan_month + (loan_sum - loan_sum / loan_month * i) * loan_mon_rate;
                    pay_sum += mon_pay; // 计算总还款金额
                    printf("第%d个月还款金额：%.2f\n", i + 1, mon_pay);
                }

                printf("等额本金按揭方式总还款金额为：%.2f\n", pay_sum);
            }
        }
        else if (ctrl == 'e') // 退出程序
        {
            break;
        }
    }

    return 0;
}
