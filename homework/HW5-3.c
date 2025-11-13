// P157 T21 找出100~1000之间的所有可逆素数
#include <stdio.h>

int isPrime(int num) // 素数
{
    if (num <= 1)
    {
        return 0;
    }
    if (num == 2)
    {
        return 1;
    }
    int i;
    for (i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int reverse(int num) // 倒序
{
    int result = 0;
    while (num > 0)
    {
        result *= 10;
        result += num % 10;
        num /= 10;
    }
    return result;
}

int main()
{
    int i;
    for (i = 100; i < 1001; i++)
    {
        if (isPrime(i) && isPrime(reverse(i)))
        {
            printf("%d是可逆素数,    ", i);
        }
    }
    return 0;
}
