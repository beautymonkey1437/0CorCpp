#include <stdio.h>
int main()
{
    int big, small, num, space, tab, others;
    big = small = num = space = tab = others = 0;
    char c;
    int bye;
    while ((c = getchar()) != EOF)
    {
        bye = ((c >= 'A' && c <= 'Z')   ? (big += 1)
               : (c >= 'a' && c <= 'z') ? (small += 1)
               : (c >= '0' && c <= '9') ? (num += 1)
               : (c == ' ')             ? (space += 1)
               : (c < 32)               ? (tab += 1)
                                        : (others += 1));
    }
    printf("%d个大写字母,%d个小写字母,%d个数字,%d个空格,%d个制表符,%d个其它字符", big, small, num, space, tab, others);
    return 0;
}