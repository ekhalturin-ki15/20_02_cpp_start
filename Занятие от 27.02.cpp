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



string sayHello2()
{
	return "\nHello cpp\n";
}


void sayHello()
{
	cout << "\nHello cpp\n";

	return;
}


string sq(float a, int b, float f)
{
	return "-";
}


string sq(int a, int b, float f = 10.f)
{
	return "+";
}


string sq(int a, int b, char ch)
{
	return "=";
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

	
	//int a, b;
	int a = 0;
	int b;

	cout << sq(1, 1) <<" "<<sq(1.5f, 1, 1.5f) << " " << sq(1, 2,'a') << " "<< sq('2', 1, 1.5f) << " " << sq(10, 1, 1.5f)  << "\n";
	//cout << sq(sq(10, 1, 'a') , 1, 'd') << "\n";


	sayHello();

	vector<int> v(10);

	for (int i = 0; i < v.size(); ++i)
	{
		//v[i] = sq(i);

	}



	return 0;
}