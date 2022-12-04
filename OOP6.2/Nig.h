#pragma once
#include <string>
#include <set>
#include <iostream>
class Nig
{
public:
	Nig();
	Nig(std::string, std::string);

	std::string name;
	std::string aut;

	void Info();

	bool operator ==(Nig)const;
	bool operator <(Nig)const;
};

void InfoArr(std::set<Nig>);