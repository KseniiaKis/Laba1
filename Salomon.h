#pragma once
#include "Free.h"
#include "Salomon.h"

class TSalomon : public TFree
{
protected:
	int Model;
public:
	void SetMod(int m);
	int GetMod();
};