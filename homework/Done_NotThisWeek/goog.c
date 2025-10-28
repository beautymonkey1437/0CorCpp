#include <stdio.h>
/*斐波那契数列！*/
/*原题
#include <stdio.h>
int main()
{
    char c,i;
    for(i=0;i<5;i++)
    {
        c=getchar();
        putchar(c-'a'+'A')；
    }
    return 0;
}
目标：只把大写改小写，其他原样输出。调试包括回车、tab
*/
int main()
{
    char c, i;
    for (i = 0; i < 5; i++)
    {
        c = getchar();
        if (c >= 'a' && c <= 'z')
            putchar(c - 'a' + 'A');
        else
            putchar(c);
    }
    return 0;
}
