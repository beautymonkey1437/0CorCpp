/*实验P96-12-浮点数组与文件读写操作
（1）浮点数存储在当前文件夹里的“data.txt”文本文件中，
运行结果写入当前文件夹里的“result.txt”文本文件中。

（2）第一次运行程序时，或“data.txt”文件不存在时，
需要通过程序输入浮点数据的个数，以及每一个数据，
并把浮点数据写入“data.txt”文件中。

（3）获得系统当前的日期（年月日）和时间（时分秒），
从“data.txt”文件中读取指定个数的浮点数到数组中，并完成排序。

（4）将日期和时间单独一行写入“result.txt”文件中，
紧接着把排序后的数组写在日期和时间的下一行。*/
#include <stdio.h>
#include <time.h>

int main()
{
    FILE *fpi, *fpo;
    time_t seconds;
    char days_mons[2][12] = {{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                             {32, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}},
         leap = 0;
    int year, month, day, hour, minute, second;
    float a[100]; // float数组
    int n;
    int i, j, k, l, m;
    float t;
    printf("有几个数(1~100):");
    scanf("%d", &n);
    fpi = fopen("data.txt", "r");
    if (fpi == NULL)
    {
        fpi = fopen("data.txt", "w+");
        printf("输入%d个数:", n);
        for (i = 0; i < n; i++)
        {
            scanf("%f", &a[i]);
            fprintf(fpi, "%f ", a[i]);
        }
        rewind(fpi);
    }
    fpo = fopen("result.txt", "a");
    for (i = 0; i < n; i++)
        fscanf(fpi, "%f", &a[i]);
    fclose(fpi);
    seconds = time(NULL) + 8 * 60 * 60;
    second = seconds % 60;
    seconds /= 60;
    minute = seconds % 60;
    seconds /= 60;
    hour = seconds % 24;
    seconds /= 24;
    year = 1970;
    leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    while ((leap && seconds > 365) || (!leap && seconds > 364))
    {
        if (leap)
            seconds -= 366;
        else
            seconds -= 365;
        year++;
        leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    }
    month = 1;
    for (i = 0; seconds >= days_mons[leap][i]; i++, month++)
        seconds -= days_mons[leap][i];
    day = seconds + 1;
    fprintf(fpo, "%d-%02d-%02d,%02d:%02d:%02d\n", year, month, day, hour, minute, second);
    // 排序
    for (k = 0; k < n - 1; k++)
    {
        for (l = k + 1; l < n; l++)
        {
            if (a[k] > a[l]) // 升序
            {
                t = a[k];
                a[k] = a[l];
                a[l] = t;
            }
        }
    }
    for (m = 0; m < n; m++)
        fprintf(fpo, "%f ", a[m]);
    fprintf(fpo, "\n");
    fclose(fpo);
    return 0;
}
