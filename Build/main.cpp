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
	cin >> n;//Просим и получаем номер модели лыж

	cout << "_____________\n";
	a.SetModSa(n);
	cout << a.GetModSa() << "\n";//Выводим номер модели

	a.SetHole("True");//Устанавливаем есть ли отверстие
	cout << "_____________\n";
	cout << a.GetHole() << "\n"; //Выводим на экран есть ли отверстие

	cout << "_____________\n" << "\n";
	a.SetSize(187);//Устанавливаем размер лыж 
	cout << a.GetSize();//выводим на экран размер лыж


	cout << "_____________\n" << "\n";
	y.SetSize(202);
	cout << y.GetSize();

	return 0;
}