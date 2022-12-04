#include <iostream>
#include <map>
#include <string>

int main()
{
	std::multimap<std::string, std::string> telKey;
	std::multimap<std::string, std::string> nameKey;

	telKey.insert(std::pair<std::string, std::string>("321", "assa"));
	telKey.insert(std::pair<std::string, std::string>("123", "qwa"));
	telKey.insert(std::pair<std::string, std::string>("321", "qwo"));
	telKey.insert(std::pair<std::string, std::string>("153", "qwas"));
	telKey.insert(std::pair<std::string, std::string>("322", "assa"));

	for (std::multimap<std::string, std::string>::iterator itr = telKey.begin(); itr != telKey.end(); ++itr)
		nameKey.insert(std::pair<std::string, std::string>(itr->second, itr->first));

	while (true)
	{
		std::string tel;
		std::string name;

		std::cout << "Input tel and name";
		std::cin >> tel >> name;

		std::pair<std::multimap<std::string, std::string>::iterator, std::multimap<std::string, std::string>::iterator> range = telKey.equal_range(tel);
		for (std::multimap<std::string, std::string>::iterator itr = range.first; itr != range.second; ++itr)
			std::cout << tel << " - " << (*itr).second << "\n";

		range = nameKey.equal_range(name);
		for (std::multimap<std::string, std::string>::iterator itr = range.first; itr != range.second; ++itr)
			std::cout << name << " - " << (*itr).second << "\n";
	}

}
