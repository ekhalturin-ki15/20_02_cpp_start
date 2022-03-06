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

	/*int mas[10];
	mas[0] = 10;
	mas[9] = 1000;

	out << mas[9] << " ";

	mas[9] = 1000;

	out << mas << " ";

	*(mas + 9) = 2000;

	out << mas + 9 << " ";

	out << mas[9] << " ";

	cout << "234345";
	out << "\n";*/
	int a[10000];
	int i = 0;

	while (in >> a[i])
	{
		++i;
	} // —читывание массива

	int n;
	cin >> n;
	for (int increase = 0; increase <= n; ++increase)
	{
		
		for (int x = 0; x < i; ++x)
		{
			out << a[x] + increase << " ";
		}
		out << "\n";


	}




	return 0;



	//int masa[1000];


	//ifstream in("input.txt");
	//ofstream name_out2("output2.txt");




	//int a, sum = 0;
	/*while (cin >> a)
	{
		sum += a;
	}
	cout << sum;*/

}