#include "Nig.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	std::set<Nig> LibPool;
	std::set<Nig> HandPool;

	LibPool.insert(Nig());
	LibPool.insert(Nig("С названием", "Известен"));
	LibPool.insert(Nig("Nill", "Kiggers"));
	LibPool.insert(Nig("Nate", "Higgers"));
	LibPool.insert(Nig("Nuck", "Figgers"));


	while (true)
	{
		int act;
		std::cout << "Выберите действие:\n1. Взять книгу\n2. Вернуть книгу\n";
		std::cin >> act;

		switch (act)
		{

		case 1:
			while (true)
			{
				std::cout << "Выберите книгу:\n";
				std::cout << "0. Вернутся назад\n";
				InfoArr(LibPool);
				std::cin >> act;

				if (act == 0)
					break;
				if (LibPool.size() < act || act < 0)
				{
					std::cout << "НЕКОРЕКТНЫЙ ВВОД. ПОПРОБУЙТЕ ЕЩЁ РАЗ\n";
					continue;
				}


				Nig swap = *std::next(LibPool.begin(), act - 1);
				LibPool.erase(swap);
				HandPool.insert(swap);
				
				//ToDo:
				//delete& swap;


			}	break;
		case 2:

			while (true)
			{
				std::cout << "Выберите книгу:\n";
				std::cout << "0. Вернутся назад\n";
				InfoArr(HandPool);
				std::cin >> act;

				if (act == 0)
					break;
				if (HandPool.size() < act || act < 0)
				{
					std::cout << "НЕКОРЕКТНЫЙ ВВОД. ПОПРОБУЙТЕ ЕЩЁ РАЗ\n";
					continue;
				}


				Nig swap = *std::next(HandPool.begin(), act - 1);
				LibPool.insert(swap);
				HandPool.erase(swap);

				//ToDo:
				//delete& swap;


			}	break;
		default:
			std::cout << "НЕКОРЕКТНЫЙ ВВОД. ПОПРОБУЙТЕ ЕЩЁ РАЗ\n"; break;
		}
	}

}
