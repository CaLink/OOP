#include "Nig.h"

Nig::Nig()
{
	name = "ÁÅÇ ÍÀÇÂÀÍÈß";
	aut = "ÍÅÈÇÂÅÑÒÅÍ";
}

Nig::Nig(std::string a, std::string b)
{
	name = a;
	aut = b;
}

void Nig::Info()
{
	std::cout << aut << " - " << name << std::endl;
}

bool Nig::operator==(Nig a) const
{
	if ((name == a.name) && (aut == a.aut))
		return true;
	return false;
}

bool Nig::operator<(Nig a) const
{
	if (aut == a.aut)
		return name < a.name;
	else
		return aut < a.aut;
}

void InfoArr(std::set<Nig> q)
{
	int t = 1;
	for (Nig i : q) {
		std::cout << t << ". ";
		i.Info();
		t++;
	}
}
