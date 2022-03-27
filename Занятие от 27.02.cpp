#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;
//getline(cin, s);

struct Str
{
	string s;

	void solve()
	{
		getline(cin, s);




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
	}

}