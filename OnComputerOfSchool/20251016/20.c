#include <stdio.h>
int main()
{
    int i, max = 0;
    for (i = 100; i < 1000; i++)
    {
        max = 55555 % i == 0 ? i : max;
    }
    printf("%d", max);
    return 0;
}