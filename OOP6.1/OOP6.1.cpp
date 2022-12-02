#include "Stud.h"

int main()
{
	std::set<Stud> qwe;
	qwe.insert(Stud("qwe", DeHu));
	qwe.insert(Stud("qwa", QWA));
	qwe.insert(Stud("qwo", QWE));
	qwe.insert(Stud("ewq", QWAS));
	qwe.insert(Stud("was", DeHu));
	qwe.insert(Stud());

	for (Stud i : qwe)
		i.Info();
	std::cout << std::endl;

	std::deque<Stud> qwa =  GetDeq(qwe, DeHu);

	for (Stud i : qwa)
		i.Info();
}
