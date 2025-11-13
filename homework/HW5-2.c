// P157 T17 把输入的字符串反序"存放"，在主函数输入和输出字符串
#include <stdio.h>
#include <string.h>

void reverse(char s1[], char s2[])
{
    int length = strlen(s1);
    int i;
    for (i = 0; i <= length - 1; i++)
    {
        s2[i] = s1[length - 1 - i];
    }
}
int main()
{
    char s1[1000] = {'\0'};
    printf("输入字符串：");
    gets(s1);
    char s2[1000] = {'\0'};
    reverse(s1, s2);
    printf("倒序，然后输出：");
    puts(s2);
    return 0;
}