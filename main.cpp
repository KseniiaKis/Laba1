#include <iostream>
#include "skiing.h"
using namespace std;

int main()
{
	int n = 0;
	TSalomon a;
	cout << "Vvedite nomer modeli Salomon\n";
	cin >> n;//������ � �������� ����� ������ ���

	cout << "_____________\n";
	a.SetModSa(n);
	cout << a.GetModSa() << "\n";//������� ����� ������

	a.SetHole("True");//������������� ���� �� ���������
	cout << "_____________\n";
	cout << a.GetHole() << "\n"; //������� �� ����� ���� �� ���������


	a.SetSize(187);//������������� ������ ���
	cout << "_____________\n" << "\n";
	cout << a.GetSize();//������� �� ����� ������ ���

	

	return 0;
}