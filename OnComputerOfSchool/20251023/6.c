#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d", &a, &b);
    d = a, e = b;
    if (!(a > 0 && b > 0 && a < b))
    {
        printf("error");
        return 0;
    }
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("%d %d", d / a, e / a);
    return 0;
}
