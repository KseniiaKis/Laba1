#pragma once
#include "Classik.h"
#include "Rossi.h"

class TRossi :public TClassik
{
public:
	int GetYear(); void SetYear(int y);
protected:
	int Year;
};