#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


//#define BB(y) AA(y)
//#define AA(x) BB(x)

#define SUM3(a, b, c)  SUM(a, SUM(b, c))
#define SUM(a, b) a + b

#define E "\n"


int sum(int a, int b)
{
	return a + b;
}

//class � struct
//
//class ctext
//{
//private:
//
//
//
//
//
//
//};

struct literal
{

};

struct Passport
{
	string FIO;
	string who_is_take;

	int number;
	int serial;

	string outAllInfo()
	{
		string s;
		s += "��� ���������� - " + FIO + E;
		s += "�������� ����� ������� �������� " + to_string(serial) + E;
		return s;
	}

};



struct Text
{
//public:

	//����
	int size;
	string t;
	//������
	void init(string s)
	{
		t = s;
		size = s.size();
	}
};




int main()
{
#ifdef NDEBUG
	FILE *IN, * OUT;
	freopen_s(&IN,  "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);
#endif

	//cout << func() << E;


	Passport my, your;

	my.FIO = "�������� �������";
	your.FIO = "������ ����";

	my.number = 1010101;
	my.serial = 1411;

	your.number = 2020202;
	your.serial = -1;

	cout << my.outAllInfo();
	cout << your.outAllInfo();


	string s, s1, s2;

	s = "123456789";
	s1 = "1";

	cout << s.size() << E;

	Text t, t1, t2;

	t.init("123456789");
	t1.init("1");

	cout << t.size << E;

}