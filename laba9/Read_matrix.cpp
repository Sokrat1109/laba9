#include "Read_matrix.h"
#include <iostream>

void read_matrix(int n, int m, int(*matrix)[100])
{
    std::cout << "введите элементы матрицы " << std::endl;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            std::cin >> matrix[i][j];

    std::cout << std::endl;
}
