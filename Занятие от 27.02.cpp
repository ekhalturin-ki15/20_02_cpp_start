#include <cmath>
#include <vector>
#include <map>
#include <iomanip>

#include <string>
#include <iostream> // cin  cout
//#include <bits/stdc++.h>

using namespace std; // �������� �������� std:: �� ���������

//���������� ����������
int a = 999999; // 
int& baa = a;



int main()
{
#ifdef RED
	++a;
#endif

	int a;
	int b;

	//a++, b++;


	cin >> a;

	//����� ��������� �� ������ ; (������ ���� ���)


	//��������� �������
	// ��������� ��, ��� � {}
	// ��������� ��� ����� ������ ;
	//��������� �������
	//..
	

	for (int i = 0; i < 10000; ++i) // ������� � �� ��������� � ������� (�������� �� ���������)
		cout << "\\/";


	for (int j = 0; (j < a); ++j, "dsf")
	{
		int q = 5;
		cout << q << " " << j << "\n";
		q = 244234;
		continue; //������� � ���������� ���� �����
		break; // �����
	}

	//���� �����
	int j = 0;
	while (j < a) // true - �����������
	{
		int q = 5;
		cout << q << " " << j << "\n";
		q = 244234;
		++j, "dsf";
	}


	do //����������� 1 ��� �����������
	{
		int q = 5;
		cout << q << " " << j << "\n";
		q = 244234;
		++j, "dsf";
	} while (j < a); // True - ��������� �� �������� ;






}