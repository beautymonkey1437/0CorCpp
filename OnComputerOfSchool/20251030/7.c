// 【问题描述】A、B、C三位同学带了21只水瓶去打水，回来时，发现有7瓶装满了水7瓶装了一半水，还有7瓶是空瓶。在不将水倒出来的情况下，如何将水和瓶平分?
// 【输出形式】输出一种可能策略，策略占一行，有九个整数，依次为A同学的满水瓶数，半水瓶数，空瓶数，B同学的满水瓶数，半水瓶数，空瓶数，C同学的满水瓶数，半水瓶数，空瓶数，
// 每个整数之间用空格隔开
#include <stdio.h>

struct student
{
    int full;
    int half;
    int empty;
} student[3];

int main()
{
    int bottles = 21;
    int bottles_per = bottles / 3;
    float water = 7 + 7 * 0.5f;
    float water_per = water / 3;
    int full, half, empty;
    full = half = empty = 7;
    int i;
    for (i = 0; i < 3; i++)
    {
        while (student[i].full + 1 < water_per && full > 0)
        {
            full -= 1;
            student[i].full += 1;
        }
        while (student[i].full + student[i].half * 0.5f < water_per && half > 0)
        {
            half -= 1;
            student[i].half += 1;
        }
        while (student[i].empty + student[i].full + student[i].half < bottles_per && empty > 0)
        {
            empty -= 1;
            student[i].empty += 1;
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d ", student[i].full);
        printf("%d ", student[i].half);
        printf("%d", student[i].empty);
        if (i != 8)
        {
            printf(" ");
        }
    }
    return 0;
}