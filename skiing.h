#pragma once
#include <string>
using namespace std;

class TSkiing
{
public:
	void Skiing(int a = 0, int b = 0);
	int GetSize(); void SetSize(int s);
	int Getrig(); void Setrig(int rig);
protected:
	int size;
	int rigidity;
};
