#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;


int main()
{
	int n = 1e6;
	//cin >> n;
	//int l = 1; int r = n + 1;
	//int m;
	

	vector<int> v = {2,4,1,3,2,4,7,87,32,546,324,23,23,12,342,23,23,23,123};
	sort(v.begin(), v.end());


	list<int> num; 
	for (int i = 1; i <= n; ++i) num.push_back(i);

	for (int i = 0; i < n; ++i)
	{
		// Только если всё отсортировано
		// Быстрый только если есть индексы (random iterator как в вектор)

		auto itt = lower_bound(num.begin(), num.end(), 20); // >= O(log(n));
	}



	auto it = lower_bound(v.begin(), v.end(), 56); //>=
	auto et = upper_bound(v.begin(), v.end(), 56); //>

	//string ans;
	//while (l != r - 1)
	//{
	//	m = (r + l) / 2;
	//	cout << "? " << m << endl;
	//	
	//	cin >> ans;
	//	if (ans == "<")
	//	{
	//		r = m;
	//	}
	//	else
	//	{
	//		l = m;
	//	}
	//}

	//cout << "! " << l;



	return 0;
}



//#include <iostream>
//#include <string>
//#include <vector>
//#include "car.h"
//#include "player.h"
//#include "hellicopter.h"
//#include <map>
//
//using namespace std;
//
//struct Bor
//{
//	char ch;
//	map<char, Bor*> branch;
//};
//
//
//int main()
//{
//#ifdef _DEBUG
//	FILE* IN, * OUT;
//	freopen_s(&IN, "input.txt", "r", stdin);
//	freopen_s(&OUT, "output.txt", "w", stdout);
//#endif
//
//
//
//
//
//	
//	int n;
//	cin >> n;
//	string s;
//
//	Bor* start = new Bor;
//	int ans = 0;
//
//	for (int i = 0; i < n; ++i)
//	{
//		Bor* cur_pos = start;
//		cin >> s;
//		for (int j = 0; j < s.size(); ++j)
//		{
//			char schar = s[j];
//			if (!cur_pos->branch.count(schar))
//			{
//				cur_pos->branch[schar] = new Bor;
//				cur_pos->branch[schar]->ch = schar;
//				cur_pos = cur_pos->branch[schar];
//				++ans;
//			}
//			else
//			{
//				cur_pos = cur_pos->branch[schar];
//			}
//		}
//	}
//
//
//	cout << ans;
//
//	return 0;
//
//
//	vector<long long> pref; int a;
//
//	ios_base::sync_with_stdio(false);
//
//	int i = 0;
//	while (cin >> a)
//	{
//		pref.push_back(a);
//		if (i > 0)
//		{
//			pref[i] += pref[i - 1];
//		}
//		++i;
//	}
//
//	int l = 5;
//	int r = 100000;
//
//	if (l > 0)
//		cout << pref[r] - pref[l - 1];
//	else
//		cout << pref[r];
//
//
//
//
//
//	Player player;
//
//	player.move(1, 2);
//
//	cout << player.info();
//
//	Car lada, ural;
//	ural.setName("Ural");
//
//	player.setCar(&lada);
//
//	cout << player.info();
//
//	player.setCar(&ural);
//
//	cout << player.info();
//
//	player.move(10, 20);
//
//	cout <<  ural.info();
//
//	cout << player.info();
//	Hellicopter h;
//	cout << h.info();
//
//	try
//	{
//		player.getter(-10, -10);
//	}
//	catch (exception s)
//	{
//		cout << s.what();
//	}
//
//	return 0;
//}