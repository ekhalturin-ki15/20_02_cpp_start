#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

//#define SUM(a, b) a + b

enum Stage
{
	start = 5,
	process = 2,
	stop = 19
};

// Возвращать псевдо для функций имеет смысл, если арг псевдоним, и мы возвр его
int& sum(int& a)
{
	return a;
}


struct Str
{
	string s;

	string& solve()
	{



		return s;
	}		

};




int main()
{
#ifdef _DEBUG
	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif
	int test = 1;

#ifdef _DEBUG
	cin >> test; cin.ignore();
#endif

	vector<Str> str;


	for (int number_test = 0; number_test < test; number_test++)
	{
		str.clear();
		str.resize(1);
		str.front().solve();
#ifdef _DEBUG
		cout << "\n" << number_test << " ------------ \n";
#endif
	}

}