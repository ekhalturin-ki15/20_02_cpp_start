#include <cmath>
#include <vector>
#include <map>
#include <iomanip>


#include <iostream> // cin  cout
//#include <bits/stdc++.h>

using namespace std; // Указание префикса std:: по умолчанию

//Глобальные переменные
int a = 999999; // 
int& baa = a;



int main()
{
	int a = 10000;
	int b = 2;


	int* ptr;

	{ // Область видимости
		//cout << a;
		int bb = 10900;

		//delete &bb;


		//ptr = &bb;
		//cout << bb;
		int a = 24325435;
		//cout << baa;

		//int psevdo;

		int* dynamic_int;


		//new int;//Возврат адреса

		dynamic_int = new int;
		*dynamic_int = 3 + 1;
		cout << *dynamic_int;

		delete dynamic_int;


		//int& psevdo = *dynamic_int;




		// Утечка памяти
		//delete dynamic_int; // ОСВОБОЖДЕНИЕ ПАМЯТИ
	}


	


	int bb = 2143244;

	//int bb = 2323;

	//cin >> *ptr;

	//cout << bb;


	cin >> b;

	



	if (b) // 0010000000 == true //  false == 000000000000000000
	{
		int c = 100;


		a += 2;
		a += 3; // Вне нашего условия
	}
	else
	{
		//cout << c;

	}

	//cout << c;




	bool bl = 1; // 1байт
	bl = ~bl; // не работает true не обращает в false
	bl = !bl;




	int n;
	cin >> n;

	a = 43857439857;





	if (!(n < 100))
	{
		a = 0;
	}
	else
	{
		if (a < 1000)
		{



		}
		else
		{



		}
	}


	cout << a;


	//if ((n < 100))  тоже самое, что if (n >= 100)
	//{
	//}


	if (!(n < 100))
	{
		a = 0;

	}





	if (0)
	{
		a *= 1000;





	}

	//
	// 	   Ничего нет
	//

	if (1)
	{
		a *= 99;

	}







	//
	// 	   a *= 99;
	//
	string aa = "ll == 0"; // true
	string g = ""; // false




	int nn;
	cin >> nn;


	if (a)
	{
		a *= 99;
	}


	if (3245983.435435 == true == 1) // 0010000000  // 000000000000000000
	{
		a = a + 1;
	}








	return 0;
}