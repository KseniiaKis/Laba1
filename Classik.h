#pragma once
#include "skiing.h"
class TClassik :public TSkiing
{
protected:
	bool m;
public:
	bool GetMod(); void SetMod(bool m);
};