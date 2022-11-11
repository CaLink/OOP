#include "CuM.h"

CuM::CuM()
{
}

CuM::CuM(int a, int b)
{
	Vol = a;
	Class = b;
}

bool CuM::operator==(CuM x)
{
	return ((Class == x.Class)&&(Vol==x.Vol));
}

bool CuM::operator!=(CuM x)
{
	return !((Class == x.Class) && (Vol == x.Vol));
}
