// 3.2.2
#include <stdio.h>
#define ELE_NUM 3
void setMatrix(int arr[][ELE_NUM]);
void matrixTranspose(int arr[][ELE_NUM]);
void printMatrix(int arr[][ELE_NUM]);
int main(void)
{
    int arr[ELE_NUM][ELE_NUM];
    printf("请输入矩阵元素////哪个冒号？\n");
    setMatrix(arr);       ////////
    matrixTranspose(arr); //////
    printf("转置后的矩阵/////冒号\n");
    printMatrix(arr); ///////
    return 0;
}

void setMatrix(int arr[][ELE_NUM])
{
    int i, j;
    for (i = 0; i < ELE_NUM; i++)
    {
        for (j = 0; j < ELE_NUM; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void matrixTranspose(int arr[][ELE_NUM])
{
    int i, j, temp;
    for (i = 0; i < ELE_NUM; i++)
    {
        for (j = 0; j < i; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void printMatrix(int arr[][ELE_NUM])
{
    int i, j;
    for (i = 0; i < ELE_NUM; i++)
    {
        for (j = 0; j < ELE_NUM; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}