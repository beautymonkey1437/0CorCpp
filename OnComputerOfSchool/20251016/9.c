#include <stdio.h>
#define A -1
#define B 255
#define C 255.0
int main()
{
    printf("%c,%d,%u,%x,%o,%ld,%f,%lf\n", A, A, A, A, A, A, A, A);
    printf("%c,%d,%u,%x,%o,%ld,%f,%lf\n", B, B, B, B, B, B, B, B);
    printf("%c,%d,%u,%x,%o,%ld,%f,%lf\n", C, C, C, C, C, C, C, C);
    return 0;
}
