/*
4) Цензура(C++)
Реализовать класс, наследующийся от std::string, который отличается от
него только ограничением : методом swap() нельзя присвоить строку,
содержащую "dr.web" (в любом регистре).Если присваиваемая строка все же
содержит эту подстроку, выбросить исключение "std::invalid_argument"
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
