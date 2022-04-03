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
};

int main()
{
#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif
	

	//vector<int> v = { 1, 4, 2, 3, 1, 3, 2, 32, 4, 3, 2, 4, 5, 3, 2, 1, 2, 1, 12, 234, 0, 39 , 34 };

	//sort(v.begin(), v.end(), my_less);


	set<int, cmp> s = {11, 4, 3, 2, 4, 5, 3, 2, 1, 2, 1, 10, 12, 234, 0, 39 , 34 };

	for (auto it : s)
		cout << it << " ";









}