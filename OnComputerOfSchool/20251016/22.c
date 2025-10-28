/*满80元不满200元部分享受8析优惠；超出200元部分享受5折优惠”。
每天坐地铁来回通勤的费用是14块，2024年8月份有22个工作日，
请问他这个月的地铁通勤费用是多少？

【输入形式】无输入
【输出形式】一个浮点数，保留两位小数，表示最后的通勤花费*/
#include <stdio.h>
int main()
{
    int fee = 14 * 22;
    float pay;
    switch (fee <= 80 ? 1 : fee <= 200 ? 2
                                       : 3)
    {
    case 1:
        pay = fee;
        break;
    case 2:
        pay = 80 + 0.8 * (fee - 80);
        break;
    case 3:
        pay = 80 + 0.8 * 120 + 0.5 * (fee - 200);
        break;
    }
    printf("%.2f", pay);
    return 0;
}
