#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <map>
using namespace std;


struct My
{
	int i = 1;
};



const int N = 100'000;
int main()
{


	ios_base::sync_with_stdio(false);

	ifstream in("input.txt");
	ofstream out("output.txt");


	//sort();

	cout << endl;

	map<long long, int> m;

	map<int, My> maa;
	maa[1000];

	map< string , int> ms;
	ms["text"] = 5;

	return 0;

	stack<int> empty;

	stack<int> st;
	
	st.push(1);
	st.push(2);
	st.push(5);
	st.push(4);
	st.push(6);

	st = empty;

	out << st.top();
	return 0;

	//for (int i = 0; i < N; ++i)
	//{
	//	out << N - i << " ";
	//}
	int nn;
	in >> nn;

	vector<int> num;
	int a;
	while (in >> a)
		num.push_back(a);

	int n = num.size();

	vector<int> memory(n);
	for (int len = 1; len < n; len *= 2)
	{
		for (int i = 0; true; i += 2)
		{
			int l = i * len;
			int r = l + len;
			int end = r + len;

			if (r >= n) break;
			if (end >= n) end = n;

			int ptr_l = l;
			int ptr_r = r;

			int ptr_memory = 0;

			while (true)
			{
				if (ptr_l == r) break;
				if (ptr_r == end) break;

				if (num[ptr_l] < num[ptr_r])
				{
					memory[ptr_memory] = num[ptr_l];
					ptr_memory++;
					ptr_l++;
				}
				else
				{
					memory[ptr_memory] = num[ptr_r];
					ptr_memory++;
					ptr_r++;
				}
			}

			while (ptr_l < r)
			{
				memory[ptr_memory] = num[ptr_l];
				ptr_memory++;
				ptr_l++;
			}


			while (ptr_r < end)
			{
				memory[ptr_memory] = num[ptr_r];
				ptr_memory++;
				ptr_r++;
			}

			for (int j = 0; j < ptr_memory; ++j)
			{
				num[l + j] = memory[j];
			}
		}




	}


	// Сортировка пузырьком O(n^2)
	/*for (int i = 0; i < N; ++i)
	{
		int flag = 1;
		for (int j = 0; j < N - i - 1; ++j)
		{
			if (num[j] > num[j + 1])
			{
				flag = 0;
				swap(num[j], num[j + 1]);
			}
		}
		if (flag) break;
	}*/


	for (int i = 0; i < num.size(); ++i)
		out << num[i] << " ";

	//for (auto it : num) out << it << " ";


	//cin >>
	//cout <<





}