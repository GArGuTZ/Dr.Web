/*
4) �������(C++)
����������� �����, ������������� �� std::string, ������� ���������� ��
���� ������ ������������ : ������� swap() ������ ��������� ������,
���������� "dr.web" (� ����� ��������).���� ������������� ������ ��� ��
�������� ��� ���������, ��������� ���������� "std::invalid_argument"
*/

#include <string>
#include <cctype>
#include <iostream>
#include <algorithm>

class Censor: public std::string
{
	using base = std::string;
public:
	Censor() :std::string(){}
	Censor(std::string s) : std::string(s){}
	using base::operator =;

	void swap(std::string& _str);
	std::string toLower(std::string _input);
private:
	const std::string census = "dr.web";
};
