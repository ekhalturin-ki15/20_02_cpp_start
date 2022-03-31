#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <filesystem>
#include <fstream>

using namespace std;
using namespace std::filesystem;
//#define SUM(a, b) a + b

//Метапрограммирование
//Программа пишущая программы
//10
//typename - > int char
//int -> -2^64 2 64


const int I_0 = 0;
const int I_1 = 2;
const int I_2 = 4;
const int I_3 = 6;
const int I_4 = 8;
const int I_5 = 10;
const int I_6 = 12;
const int I_7 = 14;
const int I_8 = 16;
const int I_9 = 18;
const int I_10 = 20;
const int I_11 = 22;
const int I_12 = 24;
const int I_13 = 26;
const int I_14 = 28;
const int I_15 = 30;
const int I_16 = 32;
const int I_17 = 34;
const int I_18 = 36;
const int I_19 = 38;
const int I_20 = 40;
const int I_21 = 42;
const int I_22 = 44;
const int I_23 = 46;
const int I_24 = 48;
const int I_25 = 50;
const int I_26 = 52;
const int I_27 = 54;
const int I_28 = 56;
const int I_29 = 58;
const int I_30 = 60;
const int I_31 = 62;
const int I_32 = 64;
const int I_33 = 66;
const int I_34 = 68;
const int I_35 = 70;
const int I_36 = 72;
const int I_37 = 74;
const int I_38 = 76;
const int I_39 = 78;
const int I_40 = 80;
const int I_41 = 82;
const int I_42 = 84;
const int I_43 = 86;
const int I_44 = 88;
const int I_45 = 90;
const int I_46 = 92;
const int I_47 = 94;
const int I_48 = 96;
const int I_49 = 98;


enum Stage
{
	start = 5,
	process = 2,
	stop = 19
};

// Возвращать псевдо для функций имеет смысл, если арг псевдоним, и мы возвр его
int& sum(int& a)
{
	return a;
}

template <typename T>
struct Matrix
{
public:

	int h, w;

	Matrix(int _h, int _w)
	{
		//_data.resize(h);
		//for (int y = 0; y < h; ++y) _data[y].resize(w);
		//vector<int> v(10);
		// v.assign(w, -1);
		h = _h;
		w = _w;
		_data.assign(h, vector<T>(w));

	}

	~Matrix()
	{}

	// 1 удобная передача арг
	// 2 защита данных
	// 3 валидация опр коррект
	T& setter(int x, int y)
	{
		if (y >= _data.size())
		{
			T error = -1;
			return error;
		}

		if (x >= _data[y].size())
		{
			T error = -1;
			return error;
		}

		return _data[y][x];
	}

	// 1 удобная передача арг
	// 2 защита данных
	// 3 валидация опр коррект
	T getter(int x, int y) const // Конст методы ничего не меняют
	{
		if (y >= _data.size())
			return -1;

		if (x >= _data[y].size())
			return -1;

		return _data[y][x];
	}

	T getter(pair<int,int> pr) const
	{
		return getter(pr.first, pr.second);
	}

	//friend istream& operator>>(istream& in, Matrix& m); // Для Того, чтобы обр к полям в функциям

private:
	vector<vector< T >> _data;
};

template <typename T>
istream& operator>>(istream& in, Matrix<T>& m)
{
	for (int y = 0; y < m.h; ++y)
	{
		for (int x = 0; x < m.w; ++x)
		{
			in >> m.setter(x, y);
		}
	}
	return in;
}

template <typename T>
ostream& operator<<(ostream& out, const Matrix<T>& m)
{
	for (int y = 0; y < m.h; ++y)
	{
		for (int x = 0; x < m.w; ++x)
		{
			out << m.getter(x, y);
		}
		out << "\n";
	}
	return out;
}


struct My_Vector
{
	int size;
	My_Vector(int _size)
	{
		size = _size;
		v.resize(size);
	}

	int getter(int index) const
	{
		if ((index >= size) || (index < 0))
			return -1;
		return v[index];
	}


	int& operator[](int i)
	{
		if ((i >= size) || (i < 0))
		{
			int error = -1;
			return error;
		}
		return v[i];
	}

private:
	vector<int> v;
};

struct Str
{

	char recurs_function(int i, string s)
	{
		char ch = s[i];

		if (i < s.size()-1)
			cout << recurs_function(i + 1, s);

		return ch;
	}


	vector<pair<int, int>> WASD = { {0,-1}, {-1, 0}, {0, 1}, {1, 0} };


	int recursion(int sx, int sy, vector<vector<int>>& v, int n)
	{
		int ans = 1;

		//for (auto [sh_x, sh_y] : WASD)
		for (int i =0 ; i < WASD.size(); ++i)
		{
			int sh_x = WASD[i].first;
			int sh_y = WASD[i].second;

			int x = sx + sh_x;
			int y = sy + sh_y;

			if ((x < 0) || (x >= n) || (y < 0) || (y >= n)) continue;
			if (v[y][x] != 0) continue;

			v[y][x] = v[sy][sx] + 1;
			ans += recursion(x, y, v, n);
		}
		return ans;
	}


	void solve()
	{


		long long  n;
		cin >> n;

		long long  x;
		cin >> x;

		long long  l = 0; long long  r = n + 1;
		long long  m;

		while (r - l > 1)
		{
			m = (r + l) / 2;

			if (x < m)
			{
				cout << "x < " << m << "\n";
				r = m;
			}
			else
			{
				l = m;
				cout << "x >= " << m << "\n";
			}
		}


		cout << l << " == " << x << "\n";


		/*vector<vector<int>> v;
		int n;
		cin >> n;
		v.assign(n, vector<int>(n));

		for (int y = 0; y < n; ++y)
		{
			for (int x = 0; x < n; ++x)
			{
				char ch;
				cin >> ch;
				switch (ch)
				{
				case '.': v[y][x] = 0; break;
				case '*': v[y][x] = -1; break;
				}
			}
		}

		int sx, sy;
		cin >> sx >> sy;
		sx--; sy--;

		v[sy][sx] = 1;

		cout << recursion(sx, sy, v, n);*/





	//	long long a, b; // O(log max(a,b))

	//	cin >> a >> b;
	//	while ((a != 0) && (b != 0))
	//	{
	//		if (a > b) a = a % b;
	//		else b = b % a;
	//	}
	//	cout << a + b;





		//string s;
		//cin >> s;
		//sort(s.begin(), s.end()); //

		//for (int i = 0; i < s.size(); ++i)
			// cout << s[i];

		//cout << recurs_function(0,  s);





		//long long N;

		//cin >> N;


		//vector<int> pr; // Простой делитель
		//vector<int> pow; //Сколько раз поделилось

		//for (int i = 2; i <= sqrt(N); ++i)
		//{
		//	int p = 0;
		//	while (N % i == 0)
		//	{
		//		++p;
		//		N /= i;
		//	}
		//	if (p != 0)
		//	{
		//		pr.push_back(i);
		//		pow.push_back(p);
		//	}
		//}

		//if (N > 1)
		//{
		//	pr.push_back(N);
		//	pow.push_back(1);
		//}

		//for (int i = 0; i < pr.size(); ++i)
		//{
		//	if (i > 0) cout << "*";
		//	cout << pr[i];
		//	if (pow[i] > 1)
		//	{
		//		cout << "^" << pow[i];
		//	}
		//}

	}

};




int main()
{
#ifdef _DEBUG
	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif
	int test = 1;

#ifdef _DEBUG
	cin >> test; cin.ignore();
#endif

	vector<Str> str;


	for (int number_test = 0; number_test < test; number_test++)
	{
		str.clear();
		str.resize(1);
		str.front().solve();
#ifdef _DEBUG
		cout << "\n\n" << number_test << " ------------ \n";
#endif
	}

}