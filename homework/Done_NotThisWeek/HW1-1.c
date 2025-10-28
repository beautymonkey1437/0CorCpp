/*原题
#include <stdio.h>
int main() {
    char c,i;
    for(i=0;i<5;i++){
        c=getchar();
        putchar(c-'a'+'A')；
    }
    return 0;
}
目标：只把大写改小写，其他原样输出。调试包括回车、tab等
*/

#include <stdio.h>
int main()
{
    char c, i;
    for (i = 0; i < 5; i++)
    {
        c = getchar(); // 从键盘缓冲取1字符
        if (c >= 'A' && c <= 'Z')
        {                           // 是否需要转换?
            putchar(c - 'A' + 'a'); // 变成小写输出
        }
        else
        {
            putchar(c); // 原样输出
        }
    }
    return 0;
}
