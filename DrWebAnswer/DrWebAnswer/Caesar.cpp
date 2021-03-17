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

// ������, ��� ��������� � ����� - ���������� ������� �� ������� �� ������ � ���� �� ��������� �� ������ �������� �����
// ����� ����, ������� ��������������� ����� (�� ������ ���� �� ������ ������� ��������)

std::wstring optimised_caesar_string(std::wstring _str)
{
	const wchar_t shift = 3;

	std::wstring res;

	const wchar_t dictionarySize = L'z' - L'a' + 1; // ������� ������ ��������
	wchar_t realShift;

	if (abs(shift) > abs(dictionarySize))
	{
		realShift = shift % dictionarySize; // ������������� �����, ����� ���� ������� ������� �� ������� ������ �� �����
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
			else // � ������, ����� ������� �� ������� ��������
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
			else // � ������, ����� ������� �� ������� ��������
			{
				res += _str[i] + realShift - dictionarySize;
				continue;
			}
		}

		res += _str[i];
	}

	return res;
}