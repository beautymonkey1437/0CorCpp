// 重复字符处理
// 连续的个数2~9的只输出1次，并在前标注次数，个数1次的原样输出
#include <stdio.h>
#include <string.h>
void string_filter(char s[]);
int main()
{
    // printf("输入:\n");
    char s[31] = {'\0'};
    // int i;
    gets(s);
    string_filter(s);
    return 0;
}
void string_filter(char s[])
{
    int i = 0, count, j;
    char c;
    while (i < 30 && s[i] != '\0')
    {
        c = s[i];
        count = 0;
        while (i < 30 && s[i] != '\0' && c == s[i] && count < 9)
        {
            count++;
            i++;
        }
        count == 1 ? printf("%c", c) : printf("%d%c", count, c);
    }
} // !!!*&****&&&&%$$$$     ))(()))