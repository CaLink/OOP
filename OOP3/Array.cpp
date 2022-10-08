#include "Array.h"
#include  <cstdlib>
#include <iostream>

ArrA ArrA::operator!()
{
	for (int i = 0; i < size; i++)
	{
		arr[i] *= -1;
	}

	return *this;
}

ArrA::ArrA()
{
    size=0;
}



void ArrA::Info()
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ", ";
	}
	std::cout << '\n';

}

double& ArrA::operator[](int i)
{
	return arr[i];
}

void ArrA::Add(double in)
{
    if(size >= MAX)
        return;
        
    arr[size]= in;
    size++;
    
}

void ArrA::Dell()
{
    size--;
}
