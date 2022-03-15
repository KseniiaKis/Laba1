#pragma once
#include <string>
using namespace std;

class TSkiing
{
public:
	int GetSize();void SetSize(int s);
	int Getrig();void Setrig(int rig);
	int size;
	int rigidity;

};
class TFree:public TSkiing
{
public:
	bool Hole;
	bool GetHole(); void SetHole(bool Hol);
};
class TClassik:public TSkiing
{
	bool Nasechki;
public:
	int GetNasech(); void SetNasech(int Nas);
};
class TFischer:public TClassik
{
public:
	string GetModFi(); void SetModFi(string s);
	string Model;
};
class TSalomon: public TFree
{
public:
	int GetModSa(); void SetModSa(int m);
	int Model;
};
class TRossi:public TClassik
{
public:
	int GetYear(); void SetYear(int y);
	int Year;
};
class TAtomic: public TFree
{
public:
	bool GetCIT(); void SetCIT(bool C);
	bool CanITry;
};

