#include "Same_st.h"
#include <iostream>

bool same_st(int n, int m, int(*matrix)[100])
{

    bool flag = false;  // ���� �� ��� ���������� �������
    int k = 0;  // �������
    int d;  // ��������������� �������

    for (int i = 0; i < n; i++)
    {
        for (d = i + 1; d < n; d++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == matrix[d][j])
                {
                    k++;
                }
            }
        }

        if (k == d)
        {
            flag = true;
        }
    }


    return flag;
}
