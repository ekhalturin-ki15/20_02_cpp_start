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


	int a = 4343;
	int b;

	int& n = b;
	//cin >> a >> b;
	int max = 3294;

	srand(time(0));

	int random = 5 + (rand() % 11);


	if ( cout<<"3" )
	{
		cout << a << " < " << n;

	}
	else
	{
lable:
		cout << a << " >= " << n;//else
	}

	cout << "\n";

	//a + "dfdf " +// to_string(b);
	//to_string()



	cout << ((a > b) ? "34" :  "dfdfdf"); // Типы совместимы void (ничего не возвращая - нельзя использовать)
	cout << max;
	max--;

	if (max != 0)
		goto lable;




	//cout << string((a < n) ? string(" < ") : string(" >= "));



	const int stop_program = 10;
	//cin >> q;
	cin >> a;


	//char ch = getchar(); // Считать один символ
	//ch = getchar();
	//const bool true = 1;

	//goto (__dgfhdsgjkh);





	if (a == 1)
		goto _default;
	else
		if (a == 0)
			goto _case0;
		else
			goto _case1;

	//switch
		_default:
			{}
		_case1: // Старт, откуда продолж программа
			a = 1000;
			//break; // Иначе перейдём дальше
		_case0:
			a = 2000;
			//return 0;

	switch (a)
	{
	default:
	{}
	case 1: // Старт, откуда продолж программа
		a = 1000;
		//break; // Иначе перейдём дальше
	case 0:
		a = 2000;
		break;
		//return 0;
		switch (b)
		{
		case 1: 
			a = 1000;
			break; // Выйти из текущего switch
		}

	}
	//printf;
	//scanf
	int i;
	float f;
	char ch;
	int i2; // не иниц переменная

	i = i2;

	int* ptr = new int;
	//scanf_s безопасный вариант разрешенный microsoft на него не ругается SDL
	scanf_s("%d %f %c\n%d", ptr, &f, &ch, &i2); // cin ввод игнор спец символов Записывае по адресу

	printf_s("%d %f %c\n%d", i, f, ch, i2); // cout вывод Важно как выводим






#ifdef _DEBUG
	cin >> a;

#else
	cin >> b;

#endif

	return 0; // Код ошибки 0 - Всё отлично

	//return 1; //     /0
	//return 2; //      
}