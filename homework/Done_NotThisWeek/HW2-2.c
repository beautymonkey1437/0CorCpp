//P91 T12
//三整数输入到数组，升序排序
#include <stdio.h>
int main(){
    int array[3];
    printf("输入三个整数：\n");
    scanf("%d%d%d", &array[0], &array[1], &array[2]);
    for(int i = 0; i < 2; i++){//冒泡排序
        for(int j = 0; j < 2 - i; j++){
            if(array[j] > array[j+1]){
                array[j] += array[j+1];//不用中间变量
                array[j+1] = array[j] - array[j+1];
                array[j] = array[j] - array[j+1];
            }
        }
    }
    printf("这三个整数按升序排列为：%d,%d,%d\n", array[0], array[1], array[2]);
    return 0;
}

