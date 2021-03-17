#pragma once

#include <ctime>
#include <vector>
#include <cstdlib>

void quick(int *_array, int _start, int _end);

void quickColumn(int **_array, int _start, int _end, size_t _column);

void quick(std::vector<int> &_array, int _start, int _end);

void quickColumn(std::vector< std::vector<int> > &_array, int _start, int _end, size_t _column);
