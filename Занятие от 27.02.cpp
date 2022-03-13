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

void f3()
{
	cout << "3";


}


void f2()
{
	f3();
	cout << "2";


}


void f1()
{
	f2();
	cout << "1";


}

void loop(int i)
{
	if (i < 10)
	{
		cout << i;
		loop(i + 1);
		cout << i;


		return;
	}
	else
		return;
}

int n;
typedef vector<vector<int>> matrix;
matrix m;

vector<int> state;


void recursion(int num_of_loop)
{
	if (num_of_loop < n) //0 < 5
	{
		for (int i = 0; i < m[num_of_loop].size(); ++i)
		{
			//cout << m[num_of_loop][i];
			state[num_of_loop] = m[num_of_loop][i]; // Фиксация
			recursion(num_of_loop + 1);
		}
	}
	else
	{
		for (int i = 0; i < state.size(); ++i)
		{
			cout << state[i] << " ";
		}
		cout << "\n";
		return;
	}

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
	return 0;
}