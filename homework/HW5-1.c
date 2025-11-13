// P157 T11 random  [0,20) 0~19分别占比
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void cal(int a)
{
    int i;
    int num;
    int count[20] = {0};
    srand((unsigned)time(NULL));
    for (i = 0; i < a; i++)
    {
        num = rand() % 20;
        count[num]++;
    }
    printf("在%d个数中,\n", a);
    for (i = 0; i < 20; i++)
    {
        printf("%d 占比 %lf,    ", i, (double)(count[i]) / a);
    }
    printf("\n\n");
}
int main()
{
    cal(100);
    cal(10000);
    return 0;
}