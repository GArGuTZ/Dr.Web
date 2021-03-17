#include "Matrix01.h"

int **generate(const int **matrix, size_t m, size_t n)
{
	int **result = new int *[n];
	for (size_t i = 0; i < n; ++i)
	{
		result[i] = new int [m];
		for (size_t j = 0; j < m; ++j)
		{
			result[i][j] = matrix[i][j];
		}
	}

	for (size_t j = 0; j < m; ++j)
	{
		quickColumn(result, 0, n - 1, j);
	}
	for (size_t i = 0; i < n; ++i)
	{
		quick(result[i], 0, m - 1);
	}

	return result;
}
