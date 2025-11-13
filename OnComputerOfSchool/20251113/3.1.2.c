// 3.1.2
#include <stdio.h>
#include <math.h>
unsigned long numEncode(unsigned num)
{
    unsigned long bitnum = 0, newnum = 0, i = 0;
    while (num != 0)
    {
        bitnum = num % 10;                ///////////////
        if (num / 10 == 0 && bitnum == 9) /////
        {
            newnum += 9 * pow(10, i);
            return newnum; ///////////////////
        }
        bitnum = (bitnum + 1) % 10; ////////
        newnum += bitnum * pow(10, i);
        i++;
        num /= 10;
    }
    return newnum; //////////
}

int main(void)
{
    unsigned origin_num;
    unsigned long new_num;
    printf("请输入一个整数////////选哪个冒号？？\n");
    scanf("%u", &origin_num);
    new_num = numEncode(origin_num);
    printf("%d编码为////哪个冒号？%lu\n", origin_num, new_num);
    return 0;
}