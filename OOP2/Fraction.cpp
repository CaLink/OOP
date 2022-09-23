#include "Fraction.h"
#include <iostream>


Fraction::Fraction()
{
	up = 0;
	down = 1;

}

Fraction::Fraction(double x, double y)
{
	up = x;
	down = y;

}

void Fraction::Info()
{
	std::cout << "\t" << this->up << "\n" << "____________\n" << '\t' << this->down;
}

void Fraction::Mult(Fraction f1)
{
	this->up* f1.up;
	this->down* f1.down;
}

void Fraction::Mult(int num)
{
	this->up* num;
}
void Fraction::Div(Fraction f1)
{
	this->up* f1.down;
	this->down* f1.up;
}

void Fraction::Div(int num)
{
	this->down* num;
}

void Fraction::Sum(int num)
{
	this->up += num * this->down;
}
