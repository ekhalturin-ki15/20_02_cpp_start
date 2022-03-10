#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
using namespace std;


int main()
{

#ifdef _DEBUG
	ifstream in("input.txt");
	ofstream out("output.txt");
#endif

	const int max_value = 30000;

	vector<int> count_rep(max_value + 1 + max_value);

	int n;
	in >> n;

	vector<int> a(n);
	for (int i =0; i < n; ++i)
	{
		in >> a[i];
		count_rep[a[i] + max_value ]++;
	}

	int count = 0;


	for (int i = 0; i < n; ++i)
	{
		if (count_rep[a[i] + max_value] == 1)
			out << a[i] << " ";
	}

	
}