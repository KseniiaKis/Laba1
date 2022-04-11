#include "Skiing.h"

void TSkiing::Skiing(int a, int b)
{
	size = a;
	rigidity = b;
}

int TSkiing::GetSize()
{
	return size;
}

void TSkiing::Setrig(int rig)
{
	rigidity = rig;
}

int TSkiing::Getrig()
{
	return rigidity;
}

void TSkiing::SetSize(int s)
{
	size = s;
}
