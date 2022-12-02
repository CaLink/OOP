#include "Stud.h"

Stud::Stud()
{
	name = "Nameless";
	way = DeHu;
}

Stud::Stud(std::string name, int way)
{
	this->name= name;
	this->way= way;
}

void Stud::Info()
{
	std::cout << name << " - " << way<<std::endl;
}

bool Stud::operator<(Stud q) const
{
	return name < q.name;
}


std::deque<Stud> GetDeq(std::set<Stud> qwe, int qwa) 
{
	std::deque<Stud> ans;
	for (Stud i : qwe)
	{
		if (i.way == qwa)
			ans.push_back(i);
	}
	return ans;
}


