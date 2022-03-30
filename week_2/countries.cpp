#include <iostream>
#include <map>

void cmd_chng_cap(std::map<std::string, std::string>& cntr);
void cmd_rename(std::map<std::string, std::string>& cntr);
void cmd_about(const std::map<std::string, std::string>& cntr);
void cmd_dump(const std::map<std::string, std::string>& cntr);

int main()
{
	std::map<std::string, std::string> cntr{};
	int N {0};
	std::cin >> N;
	std::string command {};

	for (int i = 0; i < N; ++i)
	{
		std::cin >> command;
		if (command == "CHANGE_CAPITAL")
			cmd_chng_cap(cntr);
		else if (command == "RENAME")
			cmd_rename(cntr);
		else if (command == "ABOUT")
			cmd_about(cntr);
		else if (command == "DUMP")
			cmd_dump(cntr);
		else
			std::cout << "Unknown command" << std::endl;
	}
	return 0;
}

void cmd_chng_cap(std::map<std::string, std::string>& cntr)
{
	std::string country{""};
	std::string new_capital{""};
	std::cin >> country;
	std::cin >> new_capital;
	if (cntr.count(country) == 0)
		std::cout << "Introduce new country " << country 
							<<  " with capital " << new_capital << std::endl;
	else if (cntr[country] == new_capital)
		std::cout << "Country " << country << " hasn't changed its capital" 
							<< std::endl;
	else
		std::cout << "Country " << country << " has changed its capital from " 
							<< cntr[country] << " to " << new_capital << std::endl;
	cntr[country] = new_capital;
}

void cmd_rename(std::map<std::string, std::string>& cntr)
{
	std::string old_country{""};
	std::string new_country{""};
	std::cin >> old_country;
	std::cin >> new_country;
	if ((old_country == new_country) || (cntr.count(old_country) == 0) 
																	 || (cntr.count(new_country) == 1))
		std::cout << "Incorrect rename, skip" << std::endl;
	else
	{
		std::cout << "Country " << old_country << " with capital " 
							<<  cntr[old_country] << " has been renamed to " << new_country 
							<< std::endl;
		cntr[new_country] = cntr[old_country];
		cntr.erase(old_country);
	}
}

void cmd_about(const std::map<std::string, std::string>& cntr)
{
	std::string country{""};
	std::cin >> country;
	if (cntr.count(country) == 0)
		std::cout << "Country " << country << " doesn't exist" << std::endl;
	else
		std::cout << "Country " << country << " has capital " << cntr.at(country)
							<< std::endl;

}

void cmd_dump(const std::map<std::string, std::string>& cntr)
{
	if (cntr.size() == 0)
		std::cout << "There are no countries in the world" << std::endl;
	else
	{
		for (const auto& item : cntr)
			std::cout << item.first << "/" << item.second << " ";
		std::cout << std::endl;
	}
}
