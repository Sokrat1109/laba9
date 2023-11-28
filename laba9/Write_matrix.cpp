#include "Write_matrix.h"
#include <iostream>

void write_matrix(int n, int m, int(*matrix)[100])
{
    std::cout << "Ваша матрица : " << std::endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
