#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <filesystem>
#include <fstream>
#include <set>
#include <random>
#include <map>


using namespace std;

mt19937 rand_gen;

struct cmp
{
	int x = 10;
	bool operator()(int l, int r) const
	{
		return abs(l - x) < abs(r - x);
	}
	// 9 == 11
	// == !(l<r) && !(r<l)


	// abs(9 - 10) < abs(11 - 10) false

};



int main()
{
#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif
	/*
	set<int> ss = { 2, 5, 3 ,2 ,1 ,5 ,3 ,4 ,2 ,2, 3, 5 };
	*(ss.begin());*/


	//make_heap();
	priority_queue<int> pq; // Структура данных - куча



	/*int n;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		v.push_back(a);
	}


	map<vector<int>, int> ma;

	int k; cin >> k;


	for (int i = 0; i < n - k; ++i)
	{
		vector<int> temp;
		for (int j = 0; j < k; ++j)
		{
			temp.push_back(v[i+j]);
		}
		ma[temp]++;
	}

	for (auto it : ma)
	{
		vector<int> temp = it.first;

		cout << "{";
		for (auto et : temp)
			cout << et;
		cout << "} = ";
		cout << it.second;
		cout << "\n";
	}*/




	////vector<int> v = { 1, 4, 2, 3, 1, 3, 2, 32, 4, 3, 2, 4, 5, 3, 2, 1, 2, 1, 12, 234, 0, 39 , 34 };

	////sort(v.begin(), v.end(), my_less);


	//set<int, cmp> s = {11, 4, 3, 2, 4, 5, 3, 2, 1, 2, 1, 10, 12, 234, 0, 39 , 34 };

	//for (auto it : s)
	//	cout << it << " ";


	/*set< set<int> > sv = { {1, 2, 3}, {3, 3, 4, 34}, {2, 2, 3, 3, 2,2} };*/


	//// Ключ - сортироваться
	//map<int, string, cmp> m;


	//for (int i = 1; i < 30; ++i)
	//{
	//	int r = rand_gen();
	//	m[i] = char('a');
	//}

	///*for (auto it : m)
	//{
	//	cout << it.first << " " << it.second << "\n";
	//}*/

	//m[11] = 'R';

	//for (auto [l,r] : m)
	//{
	//	cout << l << " " << r << "\n";
	//}

}