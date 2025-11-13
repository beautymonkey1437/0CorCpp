#include <stdio.h>
long func_fac(int);
double func_pow(double, int);
double func_sum(double, int);
int main()
{
    double x;
    int n;
    // printf("求e^x，其中x=? 输入");
    scanf("%lf", &x);
    // printf("展开式与x有关的有n项(0<=n<=16)，其中n=? 输入");
    scanf("%d", &n);
    printf("%lf", func_sum(x, n));
}

long func_fac(int n) // n!
{
    long result = n;
    while (n > 1)
    {
        result *= --n;
    }
    return result;
}
double func_pow(double x, int n) // x^n
{
    double result = 1.0;
    int i;
    for (i = 0; i < n; i++)
    {
        result *= x;
    }
    return result;
}
double func_sum(double x, int n) // e^x=1+x+x^2/2!+...
{
    int i;
    double result = 1.0;
    for (i = 1; i <= n; i++)
    {
        result += func_pow(x, i) / func_fac(i);
    }
    return result;
}