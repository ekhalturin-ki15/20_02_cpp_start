#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <filesystem>
#include <fstream>
#include <set>


using namespace std;

void generation_test()
{

}


int main()
{
#ifdef _DEBUG
	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif
	




	int a;
	set<int> mn;

	while (cin >> a)
	{
		mn.insert(a);
	}



	for (auto it : mn)
	{
		cout << it << " ";
	}
	cout << "\n";


	set<int> mn_2 = { 3, 5, 6, 2 , 1, 3, 45, 2 ,5 };
	for (auto it : mn_2)
	{
		cout << it << " ";
	}
	cout << "\n";


	//swap(mn, mn_2);
	//mn.swap(mn_2); // Более по умному переставляет местами
	// 
	//vector<int> v = { 5, 5, 5, 5, 5 };
	//v.count

	cout << mn.contains(5) << "\n";
	cout << mn_2.contains(5) << "\n";

	cout << mn.count(5) << "\n"; // 0
	cout << mn_2.count(5) << "\n"; // 1

	multiset<int> mm_mul;

	// insert
	// erase
	// count

	for (auto it = mn.begin(); it != mn.end();)
	{
		//auto et = it; et++;
		/*int c = a;
		a = b;
		b = c;*/
		auto et = next(it, 1);
		mn.erase(it); // it - не валидный
		it = et;
		//it = mn.begin();
	}

	//if (!mn.erase(86))
	//	cout << "Мы ничего не удалили";

	for (auto it : mn)
	{
		cout << it << " ";
	}
	cout << "\n";

	/*for (auto it : mn_2)
	{
		cout << it << " ";
	}
	cout << "\n";*/



}