#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[3][3];
    printf("Enter a matrix (3*3)->");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nOriginal:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > j)
            {
                int t = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = t;
            }
        }
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // int i = 0, j = 2;
    // while (i <= j)
    // {
    //     int temp;

    //     for (int row = 0; row < 3; row++)
    //     {
    //         temp = a[row][i];
    //         a[row][i] = a[row][j];
    //         a[row][j] = temp;
    //     }

    //     i++, j--;
    // }

    int i = 0, j = 2;
    while (i < j)
    {
        int temp;

        for (int col = 0; col < 3; col++)
        {
            temp = a[i][col];
            a[i][col] = a[j][col];
            a[j][col] = temp;
        }

        i++, j--;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}