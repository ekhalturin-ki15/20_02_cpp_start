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
	
	My_Vector()
	{
		size = 0;
		mas = nullptr;
	}


	bool setter(int index, int new_val)
	{
		if ((index < 0) || (index >= size)) return false;
		mas[index] = new_val;
		return true;
	}


	int getter(int index, bool& isCorret)
	{
		if ((index < 0) || (index >= size))
		{
			isCorret = false;
			return 0;

		}

		isCorret = true;
		return mas[index];
	}


	void resize(int new_size)
	{
		int* new_mas;
		new_mas = new int[new_size];
		for (int i = 0; i < new_size; ++i) new_mas[i] = 0;


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
	int* mas;
	int size;
};



int main()
{
#ifdef _DEBUG
	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	My_Vector my;
	my.resize(10);


	my.setter(7, 100);

	bool isCorrect = true;

	cout << my.getter(6, isCorrect) << " "<< isCorrect << E;
	cout << my.getter(7, isCorrect) << " " << isCorrect << E;
	cout << my.getter(1000, isCorrect) << " " << isCorrect << E;

	//my.size = 1000;

	my.resize(100);


}