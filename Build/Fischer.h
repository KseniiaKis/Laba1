#pragma once
#include "Classik.h"
class TFischer :public TClassik
{
public:
	string GetMod(); void SetMod(string s);
protected:
	string Model;
};
