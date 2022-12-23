#pragma once
class Cust
{
public:
	Cust();
	Cust(int);

	int x,y;
		
	bool operator >(Cust);
	
	bool operator <(Cust);

	operator char() const;
	
};

