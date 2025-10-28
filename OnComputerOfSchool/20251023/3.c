#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int a, b;
    a = -2 <= x && 2 >= x && -2 <= y && 2 >= y ? 1 : 0;
    if (a)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}