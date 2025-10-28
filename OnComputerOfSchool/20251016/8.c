#include <stdio.h>
int main()
{
    char c = 125 + 126;
    unsigned char uc = 125 + 126;
    short s = 125 + 126;
    printf("%d,%u,%d", c, uc, s);
    return 0;
}