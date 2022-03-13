#include <iostream>
#include <fstream>

#include <vector>

#include <string>
#include <cmath>

#include <queue>
#include <stack>

#include <list>
#include <forward_list>

#include <cstdio>

#include <ctime>
using namespace std;

void f2(int ptr)
{
	//int a = ____a;
	cout << ptr << "\n";
	ptr = 300;

}


void f1(int ptr, int a, int* bb)
{
	ptr = 100;
	//int a = ____a;
	cout << ptr << "\n";

}


void f1(int& ptr)
{
	//int a = ____a;
	cout << ptr << "\n";
	ptr = 300;

}



int main()
{

#ifdef _DEBUG
	/*ifstream in("input.txt");
	ofstream out("output.txt");*/

	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	int a = 20;
	cout << a << "\n";

	int* b = &a;

	(*b) = 1000;
	cout << b << "\n";
	cout << a << "\n";

	int& r = a;
	int& rr = (*b);

	r = 100000;
	cout << a << "\n";

	f2(a);

	cout << a << "\n";

	f1(a);

	cout << a << "\n";


	return 0;
}