#pragma once
#include "Free.h"

class TAtomic : public TFree
{
public:
	bool GetCIT(); void SetCIT(bool C);
protected:
	bool CanITry;
};