

#include <iostream>
#include <math.h>
#include "Read_matrix.h"
#include "Write_matrix.h"
#include "Same_st.h"
#include "Simple_count.h"
#include "Sort.h"
#define N 100
#define M 100




int main()
{
    setlocale(LC_ALL, "Russian");
    int matrix[N][M];

    int n, m;

    std::cout << "введите количество строк и столбцов ";
    std::cin >> n >> m;

    read_matrix(n, m, matrix);  // считывание

    bool flag = same_st(n, m, matrix);  // одинаковые столбцы

    bool flag_matrix = simple_count(n, m, matrix); // простое число


    if (flag == true && flag_matrix == true)  // действие
    {
        sort_matrix(n, m, matrix);
    }

    write_matrix(n, m, matrix);
}

