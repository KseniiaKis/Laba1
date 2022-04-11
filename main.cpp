#include <iostream>
#include "Salomon.h"
#include "Rossi.h"
#include "Free.h"
#include "Fischer.h"
#include "Classik.h"
#include "skiing.h"
#include "Atomic.h"
using namespace std;

int main()
{
	int n = 0;
	TSalomon a;
	TFischer e;

	a.SetMod(n);
	cout << a.GetMod() << "\n";
	e.SetMod("Fr");
	cout << e.GetMod() << "\n";
	e.SetMod("True");

	a.SetHole("True");

	a.SetSize(187);

	return 0;
}
