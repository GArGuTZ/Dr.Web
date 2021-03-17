#include <ostream>
#include <iostream>
#include <string>
#include "Matrix01.h" 
#include "Matrix02.h"
#include "Caesar.h"
#include "Censorship.h"

int main() 
{
	std::cout << "Matrix01: " << '\n';
	size_t M = 4;
	size_t N = 3;
	const int **matrix01 = new const int *[N];
	matrix01[0] = new const int[M] {25, 16, 321, 5};
	matrix01[1] = new const int[M] {14, 54, 112, 76};
	matrix01[2] = new const int[M] {21, 15, 56, 3};
	for (size_t i = 0; i < N; ++i)
	{
		std::cout << '\t';
		for (size_t j = 0; j < M; ++j)
		{
			std::cout << matrix01[i][j] << ' ';
		}
		std::cout << '\n';
	}
	std::cout << "\tMatrix01 after sort:\n";
	int **sorted01 = generate(matrix01, M, N);
	for (size_t i = 0; i < N; ++i)
	{
		std::cout << '\t';
		for (size_t j = 0; j < M; ++j)
		{
			std::cout << sorted01[i][j] << ' ';
		}
		std::cout << '\n';
	}

	for (size_t i = 0; i < N; ++i)
	{
		delete[] matrix01[i];
		delete[] sorted01[i];
	}
	delete[] matrix01;
	delete[] sorted01;

	//////////////////////////////////////////////////////
	std::cout << "Matrix02: " << '\n';
	const std::vector< std::vector<int> > matrix02 = { { 115, 16, 321, 56 }, { 14, 54, 112, 76 }, { 78, 44, 56, 3 } };
	for (size_t i = 0; i < N; ++i)
	{
		std::cout << '\t';
		for (size_t j = 0; j < M; ++j)
		{
			std::cout << matrix02[i][j] << ' ';
		}
		std::cout << '\n';
	}
	std::cout << "\tMatrix02 after sort:\n";
	std::vector< std::vector<int> > sorted02 = generate(matrix02, M, N);
	for (size_t i = 0; i < N; ++i)
	{
		std::cout << '\t';
		for (size_t j = 0; j < M; ++j)
		{
			std::cout << sorted02[i][j] << ' ';
		}
		std::cout << '\n';
	}

	//////////////////////////////////////////////////////
	std::wstring strCaesar = L"Somebody once told me the world is gonna roll me!";
	std::wstring str_crypted = get_ceasar_string(strCaesar);
	std::wstring str_crypted_Optimised = optimised_caesar_string(strCaesar);
	std::wcout << L"Caesar cipher - compare original vs. optimisation: " << L'\n';
	std::wcout << L'\t' << str_crypted << L'\n';
	std::wcout << L'\t' << str_crypted_Optimised << L'\n';

	//////////////////////////////////////////////////////
	std::wcout << L"Censorship: " << L'\n';
	std::string testString01 = "adafddr.wEb";
	Censor testCensor = "adas";
	try 
	{
		testCensor.swap(testString01);
	}
	catch (const char* msg) 
	{
		std::cerr << msg << std::endl;
	}

	return 0;
}