#include <stdio.h>
int main()
{
    /*char c = 127;
    unsigned char uc = 255;
    long l = 2147483647;
    long long ll;
    double d;
    printf("char_max=%d\n", c);
    c++;
    printf("char_min=%d\n", c);
    printf("unsigned char_max=%d\n", uc);
    printf("long_max=%ld\n", l);
    l++;
    printf("long_min=%ld\n", l);
    ll = 0xffefffffffffffffLL; // long long赋值加LL
    d = *(double *)&ll;
    printf("double_min=%g\n", d);
    ll = 0x8000000000000001LL;
    d = *(double *)&ll;
    printf("double_0-=%g\n", d);
    ll = 0x0000000000000001LL;
    d = *(double *)&ll;
    printf("double_0+=%g\n", d);
    ll = 0x7fefffffffffffffLL;
    d = *(double *)&ll;
    printf("double_max=%g\n", d);
    return 0;
    */
    printf("char_max=127\nchar_min=-128\nunsigned char_max=255\nlong_max=2147483647\nlong_min=-2147483648\ndouble_min=-1.79769e+308\ndouble_0-=-4.94066e-324\ndouble_0+=4.94066e-324\ndouble_max=1.79769e+308\n");
}
