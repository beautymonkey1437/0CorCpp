// P92 T22
//  宏, a>3x4,b>4x2
#include <stdio.h>
#define arow 3
#define acol 4
#define brow 4
#define bcol 2
int main()
{
    int a[arow][acol] = {{5, 8, 3}, {11, 0, 5}};
    int b[brow][bcol] = {{1, 18}, {2, 11}, {10, 3}};
    int c[2][2], i, j, k, s;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = s = 0; k < 3; k++)
            {
                s = s + a[i][k] * b[k][j];
            }
            c[i][j] = s;
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%6d\t", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}