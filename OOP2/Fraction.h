#pragma once


class Fraction
{
private:

	double up;
	double down;

public:

	Fraction();
	Fraction(double, double);

	void Info();

	void Mult(Fraction);
	void Mult(int);
	void Div(Fraction);
	void Div(int);
	void Sum(int);

	int GCD(int, int);
	void Prety();



};