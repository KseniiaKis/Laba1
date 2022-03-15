#include <iostream>
#include "skiing.h"
using namespace std;

int main()
{
	int n = 0;
	TSalomon a;
	cout << "Vvedite nomer modeli Salomon\n";
	cin >> n;//Просим и получаем номер модели лыж

	cout << "_____________\n";
	a.SetModSa(n);
	cout << a.GetModSa() << "\n";//Выводим номер модели

	a.SetHole("True");//Устанавливаем есть ли отверстие
	cout << "_____________\n";
	cout << a.GetHole() << "\n"; //Выводим на экран есть ли отверстие


	a.SetSize(187);//Устанавливаем размер лыж
	cout << "_____________\n" << "\n";
	cout << a.GetSize();//выводим на экран размер лыж

	

	return 0;
}