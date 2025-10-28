#include <stdio.h>
int main()
{
    int i, result = 1;
    for (i = 0; i < 23; i++)
    {
        result = (result * 156) % 1000;
    }
    printf("%03d", result);
    return 0;
}