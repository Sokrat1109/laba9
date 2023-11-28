#include "Simple_count.h"
#include <iostream>
#include <math.h>

bool simple_count(int n, int m, int(*matrix)[100])
{
    bool flag2 = true;  // проверка на простое число
    int y;  // вспомогательный счетчик
    bool flag_matrix = false; // простое число в матрице в целом

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            flag2 = true;
            for (y = 2; y < matrix[i][j]; y++)  // sqrt(matrix[i][j])+1
            {
                if (abs(matrix[i][j]) % y == 0)
                {
                    flag2 = false;
                    break;
                }
            }
            if (flag2 == true)
                flag_matrix = true;
        }
    }
    return flag_matrix;
}
