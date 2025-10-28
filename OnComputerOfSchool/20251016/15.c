#include <stdio.h>
int main()
{
    float f = -2.1, g = 3, h = 4;
    int a = 1, b = 2, c = 3.2;
    int d = a = b = c;
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
    a *= b /= c += d;
    printf("a=%d,b=%d,c=%d,d=%d\n", a, b, c, d);
    f *= g -= h += d;
    printf("f=%f,g=%f,h=%f\n", f, g, h);
    return 0;
}