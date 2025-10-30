/*实验P95-9-字符串的操作
从键盘接收一个字符串，将其中的每个数字都替换成一个*，
分别正序和逆序在屏幕上输出，
循环执行3此结束。*/
#include <stdio.h>

int main()
{
    char s[100] = {0};
    int i;
    int length = 0;
    int j;
    for (j = 0; j < 3; j++)
    {
        length = 0;
        printf("输入一个字符串:");
        scanf("%99s", s);
        printf("正序:");
        for (i = 0; s[i]; i++) // 长度
        {
            s[i] = s[i] >= '0' && s[i] <= '9' ? '*' : s[i];
            printf("%c", s[i]);
            length += 1;
        }
        printf("\n");
        printf("逆序:");
        for (length -= 1; s[length] && length >= 0; length--) // 长度
        {
            s[length] = s[length] >= '0' && s[length] <= '9' ? '*' : s[length];
            printf("%c", s[length]);
        }
        if (j < 2)
        {
            printf("\n");
        }
    }
    return 0;
    /*for(i=0;i<100;i++)//清空
    {
        s[i]=0;
    }*/
}