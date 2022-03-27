#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;
//getline(cin, s);

//#define SUM(a, b) a + b



template <typename T, typename P>
auto sum(T a, P b)
{
	if (a < b)
	{
		return a + b; // float
	}
	else
	{
		return 0.f; // float
	}
}



template <typename T, typename P>
auto sum2(T a, P b)
{
	return string(a) + string(b);

}


//auto sum2(auto a, auto b)
//{
//	return a + b;
//}



struct Str
{
	string s;


	void solve()
	{
		getline(cin, s);

		//cout <<  sum2(1, 5) << "\n";
		cout << sum2(1.6, 5.6) << "\n";
		cout << sum2(1, 5.6) << "\n";
		cout << sum2(1, 5) << "\n";

		//cout << sum(1, 4) << "\n";
		//cout << sum(1, 4.5f) << "\n"; // ошибка
		//cout << sum(1.5f, 4) << "\n"; // ошибка
		//cout << sum(1.5f, 4.f) << "\n"; // 

		//cout << sum(s, s) << "\n";

		//cout << SUM(s, "3443");
		//s + "3443"

		cout << "\n";
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

	//()
	//[]
	// >>
	// 
	//*(a + 5)
	// <>


	for (int number_test = 0; number_test < test; number_test++)
	{
		str.clear();
		str.resize(1);
		str.front().solve();
	}

}