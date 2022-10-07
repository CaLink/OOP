#include "Array.h"
#include  <cstdlib>
#include <iostream>

ArrA operator!(ArrA arr)
{
	for (int i = 0; i < arr.size; i++)
	{
		arr[i] *= -1;
	}

	return arr;
}

ArrA::ArrA()
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = rand() % 100;
	}
}



void ArrA::Info()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ', ';
	}
	std::cout << '\n';

}

double& ArrA::operator[](int i)
{
	return arr[i];
}
