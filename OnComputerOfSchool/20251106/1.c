#include <stdio.h>
struct student
{
    int gid;
    char name[20];
    char gender;
    float score;
};
int main()
{
    struct student stu[100], tmp;
    int i, j, k, m, n, so, ud;
    printf("有几位同学?");
    scanf("%d", &n);
    printf("输入%d位同学的信息:编号  姓名  性别  成绩\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d%s", &stu[i].gid, stu[i].name);
        getchar();
        scanf("%c%f", &stu[i].gender, &stu[i].score);
    }
    printf("输入排序依据(0-编号,1-姓名,2-性别,3-成绩):");
    scanf("%d", &so);
    switch (so)
    {
    case 0: // 交换排序
        for (i = 0; i < n - 1; i++)
            for (j = i + 1; j < n; j++)
                if (stu[i].gid > stu[j].gid)
                {
                    tmp = stu[i];
                    stu[i] = stu[j];
                    stu[j] = tmp;
                }
        break;
    case 1: // 选择排序
        for (i = 0; i < n - 1; i++)
        {
            k = i;
            for (j = i + 1; j < n; j++)
            {
                m = 0;
                while (stu[k].name[m] && stu[j].name[m])
                {
                    if (stu[k].name[m] != stu[j].name[m])
                    {
                        break;
                    }
                    m++;
                }
                if (stu[k].name[m] > stu[j].name[m])
                {
                    k = j;
                } // 记录最小的
            }
            tmp = stu[i];
            stu[i] = stu[k];
            stu[k] = tmp;
        }
        break;
    case 2: // 冒泡排序
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (stu[j].gender < stu[j + 1].gender)
                {
                    tmp = stu[j + 1];
                    stu[j + 1] = stu[j];
                    stu[j] = tmp;
                }
        break;
    case 3: // 插入排序
        for (i = 1; i < n; i++)
        {
            tmp = stu[i];
            for (j = i - 1; j >= 0 && tmp.score < stu[j].score; j--)
            {
                stu[j + 1] = stu[j];
            }
            stu[j + 1] = tmp;
        }
        break;
    default:
        break;
    }
    for (i = 0; i < n; i++)
    {
        printf("%d %s %c %f\n", stu[i].gid, stu[i].name, stu[i].gender, stu[i].score);
    }
    return 0;
}