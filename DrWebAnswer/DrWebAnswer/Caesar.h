/*
3) Шифр Цезаря(C++)
Дана функция шифрования строки шифром Цезаря :

#include <ostream>
#include <iostream>



int main() {

	std::wstring str = L"Somebody once told me the world is gonna roll
		me!";
		std::wstring str_crypted = get_ceasar_string(str);
	std::wcout << str_crypted << std::endl;

	return 0;
}

Оптимизируйте функцию get_ceasar_string() насколько возможно(стандарт
до С++17 включительно) и напишите пояснения к изменениям.
*/

#include <ostream>
#include <iostream>

std::wstring get_ceasar_string(std::wstring str);

std::wstring optimised_caesar_string(std::wstring _str);