/*
1) �������(C)
����� ����������� ������� �� C, �� ���� ������� �������� ������� M x N.

1) ������������� �� �������� �������� � ������ �������(N ���������)
2) ������������� �� �������� �������� � ������ ������(M ���������)
3) ������� ���������, �� ����� ������� ������

* ������������ ������� ������� ��� ���������� ������.

��������� ����������� ������� :
int **generate(const int **matrix, size_t m, size_t n);
2) ������� (C++)
����������� ��� �� �� ����� �� �++, ��������� ���� �� ����������� STL �
����������� ������������ ������. ��������� ������� ��������������
�������������� (������������ ��������� ��� ������� ������ � ��������
����������).

*/
#include <ostream>
#include <iostream>
#include "Quick.h"

std::vector< std::vector<int> > generate(const std::vector< std::vector<int> > matrix, size_t m, size_t n);