#include "Caesar.h"

std::wstring get_ceasar_string(std::wstring str) {

	const wchar_t shift = 3;

	std::wstring res;

	for (size_t i = 0; i < str.size(); i++) {

		if (str[i] >= L'a' && str[i] <= L'z') {
			res += L'a' + (str[i] - L'a' + shift) % (L'z' - L'a' + 1);
			continue;
		}

		if (str[i] >= L'A' && str[i] <= L'Z') {
			res += L'A' + (str[i] - L'A' + shift) % (L'z' - L'a' + 1);
			continue;
		}

		res += str[i];
	}

	return res;
}

// ѕервое, что бросаетс€ в глаза - вычисление остатка от делени€ от одного и того же выражени€ на каждой итерации цикла
//  роме того, хочетс€ нормализировать сдвиг (на случай если он больше размера алфавита)

std::wstring optimised_caesar_string(std::wstring _str)
{
	const wchar_t shift = 3;

	std::wstring res;

	const wchar_t dictionarySize = L'z' - L'a' + 1; // —читаем размер алфавита
	wchar_t realShift;

	if (abs(shift) > abs(dictionarySize))
	{
		realShift = shift % dictionarySize; // Ќормализируем сдвиг, после чего считать остаток от делени€ больше не нужно
	}
	else
	{
		realShift = shift;
	}

	for (size_t i = 0; i < _str.size(); ++i)
	{
		if (_str[i] >= L'a' && _str[i] <= L'z')
		{
			if (_str[i] + realShift >= L'a' && _str[i] + realShift <= L'z')
			{
				res += _str[i] + realShift;
				continue;
			}
			else // ¬ случае, когда выходим за границу алфавита
			{
				res += _str[i] + realShift - dictionarySize;
				continue;
			}
		}

		if (_str[i] >= L'A' && _str[i] <= L'Z')
		{
			if (_str[i] + realShift >= L'A' && _str[i] + realShift <= L'Z')
			{
				res += _str[i] + realShift;
				continue;
			}
			else // ¬ случае, когда выходим за границу алфавита
			{
				res += _str[i] + realShift - dictionarySize;
				continue;
			}
		}

		res += _str[i];
	}

	return res;
}