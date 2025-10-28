/*P91 题9，写完整程序，接收完字符串后输出数组中的字符串。输入尽可能长的
字符串，修改表达式*/

#include <stdio.h>
int main()
{
    char s[20], c;
    printf("输入字符串：\n");
    for (int i = 0; (i < 20) && ((c = getchar()) != '\n'); ++i)
    { // 只能输入20个字符
        s[i] = c;
    }
    printf("%s", s);
    return 0;
}

/*#include <stdio.h>
int main()
{
    char s[100000], c;
    printf("输入字符串：\n");
    for (int i = 0; (i < (100000) && ((c = getchar()) != '\n'); ++i)
    {
        s[i] = c;
    }
    printf("%s", s);
    return 0;
}
能输入10万字符 */
