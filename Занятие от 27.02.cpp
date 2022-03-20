#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


//#define BB(y) AA(y)
//#define AA(x) BB(x)

#define SUM3(a, b, c)  SUM(a, SUM(b, c))
#define SUM(a, b) a + b

#define E "\n"


int sum(int a, int b)
{
	return a + b;
}

//class и struct
//
//class ctext
//{
//private:
//
//
//
//
//
//
//};

struct literal
{

};

struct text
{
//public:

	//Поля
	int a;
	char ch;
	string st;
	literal l;

	//Методы
	int func()
	{
		return 6;
	}



};



int func()
{
	return 6;
}

int main()
{
#ifdef NDEBUG
	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	int in;

	string s;

	cout <<  sum(1, 4) << E;
	cout <<  SUM(1, 4) << E;

	cout << SUM(string("111"), string("222"));
	//cout << string("43443") + string("343434"); // Одно и то же
	cout << SUM3(1, 2, 3) << E;

	//AA(5);

	return 0;
}