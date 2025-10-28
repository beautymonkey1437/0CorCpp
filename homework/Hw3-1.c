// P92 T18
//   XX*XXX=XXXX
#include <stdio.h>
int main()
{
    int count, a, b, c, i, result = 0;
    int numlist[10] = {0};
    for (a = 10; a < 100; a++)
    {
        for (b = 100; b < 1000; b++)
        {
            for (i = 0; i < 10; i++)
            {
                numlist[i] = 0;
            }
            count = 0;
            c = a * b;
            if ((c >= 1000) && (c < 10000))
            {
                numlist[(a / 10) % 10] = 1;
                numlist[a % 10] = 1;
                numlist[(b / 100) % 10] = 1;
                numlist[(b / 10) % 10] = 1;
                numlist[b % 10] = 1;
                numlist[c / 1000] = 1;
                numlist[(c / 100) % 10] = 1;
                numlist[(c / 10) % 10] = 1;
                numlist[c % 10] = 1;
                for (i = 0; i < 10; i++)
                {
                    count += numlist[i]; // 不重复数字几个
                }
                if (count == 9)
                {
                    result += 1; // 计数
                    printf("%dx%d=%d\n", a, b, c);
                }
            }
        }
    }
    printf("共有%d种情况\n", result);
    return 0;
}
