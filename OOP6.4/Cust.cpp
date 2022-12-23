#include "Cust.h"

Cust::Cust()
{
	x = 0;
	y = 0;

}

Cust::Cust(int x)
{
	this->x = x;
	y = x * x;
}

bool Cust::operator>(Cust q)
{

	return ((x + y) > (q.x + q.y));
}

bool Cust::operator<(Cust q)
{
	return ((x + y) < (q.x + q.y));
}

Cust::operator char() const
{
	return (char)(x + y);
}
