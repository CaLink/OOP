#pragma once
#include <string>
#include <set>
#include <deque>
#include <iostream>
class Stud
{
public:
	Stud();
	Stud(std::string, int);
	void Info();
	std::string name;
	short way;

	bool operator <(Stud) const;

	
};

std::deque<Stud> GetDeq(std::set<Stud>, int);

enum Way
{
	DeHu = 0,
	QWE = 1,
	QWA = 2,
	QWAS = 3

};

