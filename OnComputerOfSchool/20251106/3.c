#include <stdio.h>
#include <time.h>
struct Time
{
    int hours;
    int minutes;
    int seconds;
};

int decode(struct Time Time)
{
    return Time.hours * 60 * 60 + Time.minutes * 60 + Time.seconds;
}
struct Time encode(int t)
{
    struct Time Time;
    t = (t % 86400 + 86400) % 86400;
    Time.seconds = t % 60;
    t /= 60;
    Time.minutes = t % 60;
    t /= 60;
    Time.hours = t % 24;
    return Time;
}
int reasonable(int num)
{
    return (num >= 0 && num < 60);
}

int main()
{
    int t, add, tmp;
    struct Time Time;
    while (1)
    {
        printf("请输入时,分,秒:");
        scanf("%d,%d,%d", &Time.hours, &Time.minutes, &Time.seconds);
        if (!((Time.hours >= 0 && Time.hours < 24) && reasonable(Time.minutes) && reasonable(Time.seconds)))
        {
            printf("输入时间不符合要求，请重新输入\n");
            continue;
        }
        break;
    }
    t = decode(Time);
    while (1)
    {
        printf("请输入调整时间的秒数:");
        scanf("%d", &add);
        if (add == 0)
        {
            break;
        }
        tmp = t + add;
        Time = encode(t);
        printf("%02d-%02d-%02d", Time.hours, Time.minutes, Time.seconds);
        Time = encode(tmp);
        printf("调整%d秒后为:%02d-%02d-%02d\n", add, Time.hours, Time.minutes, Time.seconds);
    }
    return 0;
}