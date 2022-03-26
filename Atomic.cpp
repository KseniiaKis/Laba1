#include "Skiing.h"
#include "Atomic.h"

bool TAtomic::GetCIT()
{
	return CanITry;
}
void TAtomic::SetCIT(bool C)
{
	CanITry = C;
}