// 假设学校有4辆校车，只有5位司机，如果每天有2位司机休假，另3个司机各选一辆车驾驶，则每天共有多少种排法?
// 输出一个整数。
#include <stdio.h>

typedef struct driver
{
    int s[5];
} drivertype;

drivertype generate(int a)
{
    drivertype driver;
    int i;
    for (i = 0; i < 5; i++)
    {
        driver.s[i] = a % 2;
        a /= 2;
    }
    return driver;
}

int countdriver(drivertype driver)
{
    int i, count = 0;
    for (i = 0; i < 5; i++)
    {
        count += driver.s[i];
    }
    return count;
}
int c321[10] = {0, 0, 0, 0};
int main()
{
    int bus[4] = {1, 1, 1, 1}; // 1:车空闲
    drivertype driver;
    int i, j = 0, k, a, b;
    for (a = 0; a < 32; a++) // 二进制编码driver32种情况
    {
        driver = generate(a);
        if (countdriver(driver) == 3)
        {
            for (b = 100; b < 500; b++)
            {
                for (i = 0; i < 10; i++)
                {
                    c321[i] = 0;
                }
                k = 0;
                c321[b % 10] = 1;
                c321[(b / 10) % 10] = 1;
                c321[(b / 100) % 10] = 1;
                for (i = 1; i < 5; i++)
                {
                    k += c321[i];
                }
                if (k == 3)
                {
                    j += 1;
                }
            }
        }
    }
    printf("%d", j);
    return 0;
}