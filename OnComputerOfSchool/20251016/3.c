#include <stdio.h>
int main()
{
    int i = 2147483647;
    unsigned u = 4294967295;
    float f;
    i++;
    printf("int overflow:%d\n", i);
    i--;
    printf("int underflow:%d\n", i);
    i = i * 3;
    printf("int operation overflow:%d\n", i);
    u++;
    printf("unsigned int overflow=%d\n", u);
    i = 0x7f800000;
    f = *(float *)&i;
    printf("float_INF=%g\n", f);
    i = 0x7fc00000;
    f = *(float *)&i;
    printf("float_NaN=%g\n", f);
    return 0;
}
