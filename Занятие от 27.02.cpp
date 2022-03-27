#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>

using namespace std;

//#define SUM(a, b) a + b

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
		_data.assign(h, vector<int>(w));

	}

	~Matrix()
	{}

	// 1 удобная передача арг
	// 2 защита данных
	// 3 валидация опр коррект
	int& setter(int x, int y)
	{
		if (y >= _data.size())
		{
			int error = -1;
			return error;
		}

		if (x >= _data[y].size())
		{
			int error = -1;
			return error;
		}

		return _data[y][x];
	}

	// 1 удобная передача арг
	// 2 защита данных
	// 3 валидация опр коррект
	int getter(int x, int y) const // Конст методы ничего не меняют
	{
		if (y >= _data.size())
			return -1;

		if (x >= _data[y].size())
			return -1;

		return _data[y][x];
	}

	int getter(pair<int,int> pr) const
	{
		return getter(pr.first, pr.second);
	}

	//friend istream& operator>>(istream& in, Matrix& m); // Для Того, чтобы обр к полям в функциям

private:
	vector<vector<int>> _data;
};


istream& operator>>(istream& in, Matrix& m)
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

ostream& operator<<(ostream& out, const Matrix& m)
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

struct Str
{
	string s;

	string& solve()
	{
		int h, w;
		cin >> h >> w;
		Matrix m(h , w);

		vector<int> v;

		//try()
		//catch()

		cin >> m;

		//cout << m.getter(1e6, 1);
		//cout << m.setter(1e6, 1e6);
		//for (int y = 0; y < h; ++y)
		//{
		//	for (int x = 0; x < w; ++x)
		//	{
		//		cout << m.getter(x, y);

		//		//m._data[y][x] = 100;
		//		//cin >> m._data[y][x];

		//		//m._data[y][x] = 100;
		//		m.setter(x, y) = 100;

		//		cin >> m.setter(x, y);

		//		//m[x, y];
		//	}
		//	cout << "\n";

		//}
		//

		cout << m;
		/*for (int y = 0; y < h; ++y)
		{
			for (int x = 0; x < w; ++x)
			{
				cout << m.getter(x, y);
			}
			cout << "\n";

		}*/



		return s;
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
		cout << "\n" << number_test << " ------------ \n";
#endif
	}

}