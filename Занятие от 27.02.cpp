#include <cmath>
#include <vector>
#include <map>
#include <iomanip>

#include <string>
#include <iostream> // cin  cout
//#include <bits/stdc++.h>

using namespace std; // Указание префикса std:: по умолчанию

//Глобальные переменные
int a = 999999; // 
int& baa = a;



int main()
{
#ifdef RED
	++a;
#endif

	int a;
	int b;

	//a++, b++;


	cin >> a;

	//Вначе инициализ до первой ; (только один раз)


	//Проверяем условие
	// Выполняем то, что в {}
	// Выполняем код после второй ;
	//Проверяем условие
	//..
	

	for (int i = 0; i < 10000; ++i) // Счетчик и он участвует в условии (пробежка по диапазону)
		cout << "\\/";


	for (int j = 0; (j < a); ++j, "dsf")
	{
		int q = 5;
		cout << q << " " << j << "\n";
		q = 244234;
		continue; //Перейти к следующему шагу цикла
		break; // выйти
	}

	//Тоже самое
	int j = 0;
	while (j < a) // true - выполняется
	{
		int q = 5;
		cout << q << " " << j << "\n";
		q = 244234;
		++j, "dsf";
	}


	do //Обязательно 1 раз выполняется
	{
		int q = 5;
		cout << q << " " << j << "\n";
		q = 244234;
		++j, "dsf";
	} while (j < a); // True - выпонение не забудьте ;






}