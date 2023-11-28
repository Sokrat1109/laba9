#include "Sort.h"
#include <iostream>
#include <math.h>
#define N 100

void sum_mas(int n, int m, int* massive, int(*matrix)[100])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            massive[i] += abs(matrix[i][j]);
        }
    }
}

void sort_matrix(int n, int m, int(*matrix)[100])
{
    int massive[N];  // сумма модулей в строке

    sum_mas(n, m, massive, matrix);

    for (int i = 0; i < n; i++)
    {
        for (int k = i + 1; k < n; k++)
        {
            if (massive[i] > massive[k])
            {
                for (int j = 0; j < m; j++)
                {
                    int tmp = matrix[i][j];
                    matrix[i][j] = matrix[k][j];
                    matrix[k][j] = tmp;

                    tmp = massive[i];
                    massive[i] = massive[k];
                    massive[k] = tmp;
                }
            }
        }
    }
}
