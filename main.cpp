#include <iostream>
#include <string>
#include <vector>
#include "car.h"
#include "player.h"
#include "hellicopter.h"
#include <map>

using namespace std;

struct Bor
{
	char ch;
	map<char, Bor*> branch;
};


int main()
{
#ifdef _DEBUG
	FILE* IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	
	int n;
	cin >> n;
	string s;

	Bor* start = new Bor;
	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		Bor* cur_pos = start;
		cin >> s;
		for (int j = 0; j < s.size(); ++j)
		{
			char schar = s[j];
			if (!cur_pos->branch.count(schar))
			{
				cur_pos->branch[schar] = new Bor;
				cur_pos->branch[schar]->ch = schar;
				cur_pos = cur_pos->branch[schar];
				++ans;
			}
			else
			{
				cur_pos = cur_pos->branch[schar];
			}
		}
	}


	cout << ans;

	return 0;


	vector<long long> pref; int a;

	ios_base::sync_with_stdio(false);

	int i = 0;
	while (cin >> a)
	{
		pref.push_back(a);
		if (i > 0)
		{
			pref[i] += pref[i - 1];
		}
		++i;
	}

	int l = 5;
	int r = 100000;

	if (l > 0)
		cout << pref[r] - pref[l - 1];
	else
		cout << pref[r];





	Player player;

	player.move(1, 2);

	cout << player.info();

	Car lada, ural;
	ural.setName("Ural");

	player.setCar(&lada);

	cout << player.info();

	player.setCar(&ural);

	cout << player.info();

	player.move(10, 20);

	cout <<  ural.info();

	cout << player.info();
	Hellicopter h;
	cout << h.info();

	try
	{
		player.getter(-10, -10);
	}
	catch (exception s)
	{
		cout << s.what();
	}

	return 0;
}