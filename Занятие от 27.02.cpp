#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

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

struct Passport
{
public:
	string FIO;
	string who_is_take;

	int number = 29;
	int serial = 100;

	string* reg;

	Passport()
	{
		count = 0;
		number = 0;
		serial = 1000;
		who_is_take = FIO = "";

		size_reg = 1;
		reg = new string[size_reg];
	}

	~Passport()
	{
		delete [] reg;
	}

	string outAllInfo()
	{
		string s;
		s += "ФИО обладателя - " + FIO + E;
		s += "Серийные номер данного паспорта " + to_string(serial) + E;
		return s;
	}

	int getSize() // Гетером
	{
		++count;
		return size_reg;
	}

	void setSize(int new_size)// Сеттер
	{
		delete[] reg;
		reg = new string[new_size];
		size_reg = new_size;
		double_size = size_reg * 2;
	}

private:

	int count = 0;
	int double_size = 0;
	int size_reg = 0;
};



struct Text
{
	//public:
	//Поля
	int size;
	string t;

	//Методы

	Text() = default;

	Text(string s)
	{
		t = s;
		size = s.size();

	}

};


struct My_Vector
{

public:
	int* mas;
	My_Vector()
	{
		size = 0;
		mas = nullptr;
	}

	void resize(int new_size)
	{
		int* new_mas;
		new_mas = new int[new_size];
		for (int i = 0; i < min(size, new_size); ++i)
		{
			new_mas[i] = mas[i];
		}
		delete[] mas;
		size = new_size;
		mas = new_mas;
	}


	~My_Vector()
	{
		delete[] mas;
	}

private:
	int size;
};



int main()
{
#ifdef _DEBUG
	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	//cout << func() << E;
	int i = 10;

	string s;
	s.size();

	s.resize(10);

	while (i--)
	{
		Passport my, your;
		Passport* q;

		//my.size_reg = 1000;

		q = new Passport;


		my.FIO = "Халтурин Евгений";
		your.FIO = "Иванов Иван";

		delete q;

		my.number = 1010101;
		my.serial = 1411;

		your.number = 2020202;
		your.serial = -1;

		//cout << my.outAllInfo();
		//cout << your.outAllInfo();

		string s, s1, s2;

		s = "123456789";
		s1 = "1";

		//cout << s.size() << E;

		Text t("123456789"), t1("1"), t2;


		//cout << t.size << E;
	}


	i = i + 5;
	cout << "";

}