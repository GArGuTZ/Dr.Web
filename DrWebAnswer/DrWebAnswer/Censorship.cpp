#include "Censorship.h"

void Censor::swap(std::string& _str)
{
	std::string place = toLower(_str);

	std::size_t found = place.find(census);

	if (found == std::string::npos)
	{
		std::string::swap(_str);
	}
	else
	{
		throw "Find dr.web in input";
	}
}

std::string Censor::toLower(std::string _input) 
{
	std::transform(_input.begin(), _input.end(), _input.begin(), [](unsigned char c){ return std::tolower(c); });
	return _input;
}
