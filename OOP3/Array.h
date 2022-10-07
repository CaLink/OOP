#pragma once

class ArrA
{
public:

	double arr[10];
	int size = 10;

	ArrA();
	
	void Info();
	double& operator [](int);




};

ArrA operator !(ArrA);
