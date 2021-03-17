#include "Quick.h"

void quick(int *_array, int _start, int _end)
{
	std::srand(time(NULL));
	int arrayLength = _end - _start + 1;
	int x = _array[_start + rand() % arrayLength];
	int i = _start;
	int j = _end;

	while (i <= j)
	{
		while (_array[i] > x)
		{
			++i;
		}

		while (_array[j] < x)
		{
			--j;
		}

		if (i <= j)
		{
			if (_array[i] < _array[j])
			{
				int buf = _array[i];
				_array[i] = _array[j];
				_array[j] = buf;
			}

			++i;
			--j;
		}
	}

	if (i < _end)
	{
		quick(_array, i, _end);
	}

	if (_start < j)
	{
		quick(_array, _start, j);
	}
}

void quickColumn(int **_array, int _start, int _end, size_t _column)
{
	std::srand(time(NULL));
	int arrayLength = _end - _start + 1;
	int x = _array[_start + rand() % arrayLength][_column];
	int i = _start;
	int j = _end;

	while (i <= j)
	{
		while (_array[i][_column] > x)
		{
			++i;
		}

		while (_array[j][_column] < x)
		{
			--j;
		}

		if (i <= j)
		{
			if (_array[i][_column] < _array[j][_column])
			{
				int buf = _array[i][_column];
				_array[i][_column] = _array[j][_column];
				_array[j][_column] = buf;
			}

			++i;
			--j;
		}
	}

	if (i < _end)
	{
		quickColumn(_array, i, _end, _column);
	}

	if (_start < j)
	{
		quickColumn(_array, _start, j, _column);
	}
}

void quick(std::vector<int> &_array, int _start, int _end)
{
	std::srand(time(NULL));
	int arrayLength = _end - _start + 1;
	int x = _array[_start + rand() % arrayLength];
	int i = _start;
	int j = _end;

	while (i <= j)
	{
		while (_array[i] > x)
		{
			++i;
		}

		while (_array[j] < x)
		{
			--j;
		}

		if (i <= j)
		{
			if (_array[i] < _array[j])
			{
				int buf = _array[i];
				_array[i] = _array[j];
				_array[j] = buf;
			}

			++i;
			--j;
		}
	}

	if (i < _end)
	{
		quick(_array, i, _end);
	}

	if (_start < j)
	{
		quick(_array, _start, j);
	}
}

void quickColumn(std::vector< std::vector<int> > &_array, int _start, int _end, size_t _column)
{
	std::srand(time(NULL));
	int arrayLength = _end - _start + 1;
	int x = _array[_start + rand() % arrayLength][_column];
	int i = _start;
	int j = _end;

	while (i <= j)
	{
		while (_array[i][_column] > x)
		{
			++i;
		}

		while (_array[j][_column] < x)
		{
			--j;
		}

		if (i <= j)
		{
			if (_array[i][_column] < _array[j][_column])
			{
				int buf = _array[i][_column];
				_array[i][_column] = _array[j][_column];
				_array[j][_column] = buf;
			}

			++i;
			--j;
		}
	}

	if (i < _end)
	{
		quickColumn(_array, i, _end, _column);
	}

	if (_start < j)
	{
		quickColumn(_array, _start, j, _column);
	}
}