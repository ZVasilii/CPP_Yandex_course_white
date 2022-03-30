#include <iostream>
#include <vector>

enum people
{
	WORRY,
	CALM
};

void cmd_worry(std::vector<char>& qry);
void cmd_quiet(std::vector<char>& qry);
void cmd_come(std::vector<char>& qry);
void cmd_worry_count(std::vector<char>& qry);

int main()
{
	std::vector<char> qry{};
	int N {0};
	std::cin >> N;
	std::string command {};

	for (int i = 0; i < N; ++i)
	{
		std::cin >> command;
		if (command == "WORRY")
			cmd_worry(qry);
		else if (command == "QUIET")
			cmd_quiet(qry);
		else if (command == "COME")
			cmd_come(qry);
		else if (command == "WORRY_COUNT")
			cmd_worry_count(qry);
		else
			std::cout << "Unknown command" << std::endl;
	}
	return 0;
}

void cmd_worry(std::vector<char>& qry)
{
	int value;
	std::cin >> value;
	qry[value] = WORRY;
} 

void cmd_quiet(std::vector<char>& qry)
{
	int value;
	std::cin >> value;
	qry[value] = CALM;
} 

void cmd_come(std::vector<char>& qry)
{
	int value;
	std::cin >> value;
	qry.resize(qry.size() + value, CALM);
}

void cmd_worry_count(const std::vector<char>& qry)
{
	int worried{0};
	for (const auto& pearson : qry)
		if (pearson == WORRY)
			worried++;
	std::cout << worried << std::endl;
}