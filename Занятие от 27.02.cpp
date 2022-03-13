#include <iostream>
#include <fstream>

#include <vector>

#include <string>
#include <cmath>

#include <queue>
#include <stack>

#include <list>
using namespace std;


int main()
{

#ifdef _DEBUG
	ifstream in("input.txt");
	ofstream out("output.txt");

	/*FILE *IN, * OUT;
	freopen_s(&IN, "input.txt", "r", stdin);
	freopen_s(&OUT, "output.txt", "w", stdout);*/
#endif

	int* mas;
	int* i;

	mas = new int[10000];
	i = new int[1];

	char ch;

	bool bl;

	unsigned char uch;

	list<char> lltt;
	for (list<char>::iterator it = lltt.begin(); it != lltt.end(); ++it)
	{

	}




	//mas[100]
	int n;
	n = 5;

	vector<char> v(100);

	v.push_back(6);

	for (vector<char>::iterator it = v.begin(); it != v.end(); ++it)
	{

	}


	v.pop_back();

	v.back();


	string s;

	s = "well";

	s += " done";

	//s(5);


	*(s.begin() + 5);

	s[5] = '\0';

	cout << s;

	//printf("%s", s);


	//s.resize(5);

	system("pause");

	s = s + s;

	list< int > li;


	li.insert(next(li.begin(), 5), 1000);



	queue<int> q;
	q.push( 5 );
	q.pop();
	q.front();



	stack < int > st;
	st.push(5);
	st.pop();
	st.top();


	deque< int > dq;
	dq.push_front(30 );
	dq.pop_front();


}