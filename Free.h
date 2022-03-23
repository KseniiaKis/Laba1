#pragma once
#include "skiing.h"
class TFree :public TSkiing
{
public:
	bool GetHole(); void SetHole(bool Hol);
protected:
	bool Hole;
};