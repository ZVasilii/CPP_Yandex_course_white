#include <vector>
#include <iostream>

void MoveStrings(std::vector<std::string>&source, std::vector<std::string>&destination);

int main()
{
	std::vector<std::string> source = {"a", "b", "c"};
	std::vector<std::string> destination = {"z"};
	MoveStrings(source, destination);
	for (auto str : destination)
		std::cout << str << std::endl;
	return 0;
}
void MoveStrings(std::vector<std::string>&source, std::vector<std::string>&destination)
{
	for (auto str : source)
		destination.push_back(str);
	source.clear();
}