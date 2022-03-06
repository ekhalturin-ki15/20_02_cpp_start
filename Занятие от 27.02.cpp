#include <iostream>
#include <cmath>
#include <string>

#include <fstream>
using namespace std;

int a, b, c = int();
bool bl;

int tt[1000];

int main()
{

#ifdef _DEBUG
	ifstream in("input.txt");
	ofstream out("output.txt"); 

#endif

	const int SIZE = 100;
	int n;
	in >> n;

	int mas[SIZE]; // Заранее


	out << mas << "\n\n";

	// error int mas[n];

	int* dmas;

	dmas = new int[n]; // Выделение памяти во времени выполнения

	out << dmas << "\n";

	for (int i = 0; i < n; ++i)
	{
		in >> dmas[i];
	}

	for (int i = n - 1; i >=0 ; --i)
	{
		out <<  dmas[i] << " ";
	}

	//delete dmas; // Удаление одного

	int* copy_dmas;
	copy_dmas = new int[n * 2];

	for (int i = 0; i < n; ++i)
	{
		copy_dmas[i] = dmas[i];
	}
	delete[] dmas;
	dmas = copy_dmas;
	n = n * 2;



	delete[] dmas;


	char* dcharmas;

	dcharmas = new char[n]; // Выделение памяти во времени выполнения

	out << "\n";
	out << (int*)dcharmas << "\n";

	for (int i = 0; i < n; ++i)
	{
		in >> dcharmas[i];
	}

	for (int i = n - 1; i >= 0; --i)
	{
		out << dcharmas[i] << " ";
	}

	//delete dmas; // Удаление одного
	delete[] dcharmas;

	//delete dmas;

	//dmas = new int[n*2];

	





}