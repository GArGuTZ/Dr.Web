#include "Matrix02.h"

std::vector< std::vector<int> > generate(const std::vector< std::vector<int> > matrix, size_t m, size_t n)
{
	std::vector< std::vector<int> > result = matrix;

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