#include <iostream>
#include "Skiing.h"
#include "Atomic.h"
#include "Rossi.h"
#include "Salomon.h"
#include "Fischer.h"
#include "Classik.h"
#include "Free.h"
using namespace std;

int main()
{
	int n = 0;
	TSalomon a;
	TRossi y;
	cout << "Vvedite nomer modeli Salomon\n";
	cin >> n;//������ � �������� ����� ������ ���

	cout << "_____________\n";
	a.SetModSa(n);
	cout << a.GetModSa() << "\n";//������� ����� ������

	a.SetHole("True");//������������� ���� �� ���������
	cout << "_____________\n";
	cout << a.GetHole() << "\n"; //������� �� ����� ���� �� ���������

	cout << "_____________\n" << "\n";
	a.SetSize(187);//������������� ������ ��� 
	cout << a.GetSize();//������� �� ����� ������ ���


	cout << "_____________\n" << "\n";
	y.SetSize(202);
	cout << y.GetSize();

	return 0;
}