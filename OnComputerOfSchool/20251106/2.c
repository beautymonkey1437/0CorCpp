#include <stdio.h>
#include <time.h>

struct student
{
    int gid;
    char name[20];
    char gender;
    float score;
};
int main()
{
    FILE *fpi, *fpo;
    time_t seconds;
    struct tm *stm;
    struct student a[100];
    char ch;
    int n, i, j, op, t; // opcode 0 content 1 write 10 exit
    while (1)
    {
        printf("选择操作 (0 - 显示内容，1 - 输入数据，10 - 结束):");
        scanf("%d", &op);
        switch (op)
        {
        case 0:
            fpi = fopen("stardata.txt", "r");
            if (fpi == NULL)
            {
                printf("打开 stardata.txt 文件出错了\n");
                break;
            }
            else
            {
                while ((ch = fgetc(fpi)) != EOF)
                {
                    putchar(ch);
                }
                fclose(fpi);
            }
            break;
        case 1:
            printf("有几个数 (1~100) 要写入文件：");
            scanf("%d", &n);
            printf("输入 %d 位同学的信息：编号 姓名 性别 成绩\n", n);
            for (i = 0; i < n; i++)
            {
                scanf("%d%s", &a[i].gid, a[i].name);
                getchar();
                scanf("%c%f", &a[i].gender, &a[i].score);
            }
            seconds = time(NULL);
            stm = localtime(&seconds);
            fpo = fopen("stardata.txt", "a");
            fprintf(fpo, "%d-%02d-%02d,%02d:%02d:%02d\n",
                    stm->tm_year + 1900, stm->tm_mon + 1, stm->tm_mday,
                    stm->tm_hour, stm->tm_min, stm->tm_sec);
            for (i = 0; i < n; i++)
            {
                fprintf(fpo, "%d %s %c %.2f\n", a[i].gid, a[i].name, a[i].gender, a[i].score);
            }
            fclose(fpo);
            break;
        case 10:
            return 0;
        default:
            break;
        }
    }
    return 0;
}