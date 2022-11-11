#include "Call.h"

Call::Call()
{

	x = 0; 
	y = 0;

}

Call::Call(int x, int y)
{
	this->x = x;
	this->y = y;
}

Call::operator int() const
{

	return x + y;

}

Call::operator char() const
{
	return (char)(x + y);
}
