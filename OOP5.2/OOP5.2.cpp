#include <iostream>
#include "Arr.h"
#include "Call.h"

int main()
{

	Arr<int> testInt;
	Arr<Call> testCal;

	testInt.Add(1);
	testInt.Add(2);
	testInt.Add(3);
	testInt.Add(4);
	testInt.Add(5);

	testInt.Add(8);
	testInt.Add(9);

	testInt.Add(6);

	testInt.Info();

	testInt.Remove(3);
	testInt.Remove(4);

	testInt.Info();

	Call temp(50, 6);

	testCal.Add(Call(30, 9));
	testCal.Add(Call(40, 7));
	testCal.Add(temp);
	testCal.Add(Call(60, 4));
	testCal.Add(Call(70, 2));


	testCal.Add(Call(1000, 1000));
	testCal.Add(Call(100, 100));

	testCal.Info();

	testCal.Remove(temp);
	
	testCal.Info();








}

