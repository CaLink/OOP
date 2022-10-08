#pragma once

const int MAX = 10;

class ArrA
{

public:

	double arr[MAX];
	int size;

	ArrA();
	
	void Info();
	
	void Add(double);
	void Dell();
	
	double& operator [](int);
	
	ArrA operator !();

};


