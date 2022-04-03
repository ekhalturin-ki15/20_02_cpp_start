#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <filesystem>
#include <fstream>
#include <set>
#include <random>


using namespace std;

mt19937 rand_gen;


void generation_test(int n, int k, int m)
{
	//rand_gen();

	cout << n << "\n";
	set<int> s;
	
	for (int i = 0; i < n; ++i)
	{
		int new_int = unsigned int(rand_gen()) % m;
		cout << new_int << " ";
	}
	cout << "\n" << k << "\n";
	for (int i = 0; i < k; ++i)
	{
		int new_int = unsigned int(rand_gen()) % m;
		cout << new_int << " ";
	}
	cout << "\n";
}


void main2(int a, int b);

int step = 0;

int main()
{
	

	//rand();


#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif
	rand_gen.seed(time(0));
	//generation_test(1e5, 1e5, 1e9);
	//return 0;

	vector<int> v;
	int n, k ;
	cin >> n;
	v.resize(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	cin >> k;
	/*
	vector<int> sv(k);
	for (int i = 0; i < k; ++i)
	{
		cin >> sv[i];
	}*/


	//for (int i = 0; i < n; ++i) // 1e5
	//{
	//	for (int j = 0; j < k; ++j) // 1e5
	//	{
	//		if (v[i] == sv[j])
	//		{
	//			cout << v[i] << " ";
	//			sv[j] = -1;
	//			break;
	//		}
	//	}

	//}



	multiset<int> sv; // Дубликаты

	sv.begin();
	sv.end();


	if (sv.size()) sv.erase(--sv.end());

	for (int i = 0; i < k; ++i)
	{
		int a;
		cin >> a;
		sv.insert(a);
	}



	for (int i = 0; i < n; ++i)
	{
		auto& it = v[i];

		if (sv.count(it)) // 5
		{
			cout << it << " ";
			sv.erase(sv.find(it)); // 5 // 5
		}
	}



}