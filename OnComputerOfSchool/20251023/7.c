#include <stdio.h>
#include <math.h>
int main()
{
    double x, sqrtx;
    double a;
    scanf("%lf", &a);
    x = sqrtx = a;

    sqrtx = x - (x * x - a) / (2 * x);
    while (fabs(sqrtx - x) >= 1e-6)
    {
        x = sqrtx;
        sqrtx = x - (x * x - a) / (2 * x); // f(x)x*x-a,f'(x)=2x
    }
    if (sqrtx > 0)
    {
        printf("%lf", sqrtx);
    }
    return 0;
}
