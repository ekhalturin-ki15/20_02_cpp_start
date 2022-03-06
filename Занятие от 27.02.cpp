#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

#include <fstream>
using namespace std;

int a, b, c = int();
bool bl;

int tt[1000];

int main()
{

#ifdef _DEBUG
	ifstream in("input.txt");
	ofstream out("output.txt");

#endif

	//for ()
	//	for ()
	//	{
	//		for ()
	//		{
	//			for ()
	//			{

	//			}
	//		}
	//	}



	//const int h = 4, w = 6;
	////in >> h >> w;

	//int mas[h * w];


	////int* mas;
	////mas = new int[h*w];

	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		// [0 w)
	//		in >> mas[x + y * w]; // [0 h*w)
	//	}
	//}



	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		// [0 w)
	//		out  << mas[x + y * w] << " "; // [0 h*w)
	//	}

	//	out << "\n";
	//}

	////int mulmas[1][2][3][4][5][6][7]; // 7!
	//int mulmas[w][h];

	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		in >> mulmas[x][y];
	//	}
	//}

	//out << "\n";
	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		out << mulmas[x][y] << " ";
	//	}
	//}




	//int h, w;
	//int **dmulmas;
	//in >> h;

	//dmulmas = new int* [h];

	//int* size = new int[h];


	//for (int y = 0; y < h; ++y)
	//{
	//	in >> size[y];
	//	w = size[y];
	//	dmulmas[y] = new int[w];
	//	for (int x = 0; x < w; ++x)
	//		in >> dmulmas[y][x];
	//}


	//for (int y = 0; y < h; ++y)
	//{
	//	w = size[y];
	//	for (int x = 0; x < w; ++x)
	//	{
	//		out  << dmulmas[y][x] << " ";
	//	}
	//	out << "\n";
	//}


	//  C++   vector

	//vv = new int [50];
	////vv = new int [n];
	//int* vv;

	////std::vector< int > v(50);
	////std::vector< int > v(n);

	//int n;
	//in >> n;

	//std::vector< int > v(n); // Статическое время жизни


	//for (int i = 0; i < n; ++i)
	//	in >> v[i];

	//int a = 1000;

	//for (int i = 0; i < n; ++i)
	//	out << v[i] << " ";
	//out << "\n";

	//v.push_back(100);

	//v.pop_back();

	//v.push_back(a);
	//for (int i = 0; i < v.size() ; ++i)
	//	out << v[i] << " ";
	//out << "\n";


	/*int a;

	vector<int> v;

	while (in >> a)
		v.push_back(a);

	for (int i = 0; i < v.size(); ++i)
		out << v[i] << " ";*/

	//vector <vector<char>> mapa;
	//int h, w;
	//in >> h >> w;

	//mapa.resize(h);

	//for (int y = 0; y < h; ++y)
	//	mapa[y].resize(w);


	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		in >> mapa[y][x];
	//	}
	//}



	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		out<< mapa[y][x];
	//	}
	//	out << "\n";
	//}
	//out << "\n\n";

	//// rand() == 5;
	//srand(time(0));




	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		if (mapa[y][x] == '.')
	//		{
	//			int r = rand();
	//			if (r % 6== 0)
	//				mapa[y][x] = '@';

	//		}
	//	}
	//}

	//for (int y = 0; y < h; ++y)
	//{
	//	for (int x = 0; x < w; ++x)
	//	{
	//		out << mapa[y][x];
	//	}
	//	out << "\n";
	//}




	//vector<int>* dv;
	//dv = new (vector<int>);

	vector<char> vc = {'3', '3', 'a', '0' ,' ', '3'};
	//vc = vc + vc;

	vc.insert(vc.end(), vc.begin(), vc.end());


	string s = "0123456789";
	string ss = "3434";

	
	s = s.substr(5, s.size() - 5);

	reverse(s.begin(), s.end());
	out << s;

	

	//for (int i = 0; i < vc.size(); ++i)
	//	out << vc[i];

	//out << v;


	vector<int> vvv;
	deque<int> dvv;

	dvv.push_front(2);
	dvv.pop_front();


}