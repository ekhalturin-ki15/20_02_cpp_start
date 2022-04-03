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
#include <exception>

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
	//Обёртка queue stack


	int a, b;
	cin >> a >> b;
	try
	{
		if (b == 0) throw logic_error("Деление на ноль");
		if (a > 100) throw overflow_error("Большое число");
		cout <<  a / b;
	}
	catch (std::logic_error exc)
	{
		cout << exc.what();
	}
	catch (std::overflow_error exc)
	{
		cout << "INF";
	}
	catch (...)// default
	{

	}
	

}