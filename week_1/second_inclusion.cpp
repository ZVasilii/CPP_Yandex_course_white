#include <iostream>
#include <string>
int main()
{
	std::string str{""};
	std::cin >> str;
	int k{0}, index{0};
	for (auto i: str)
	{
		if (i == 'f')
			k++;
		if (k == 2)
		{
			std::cout << index << std::endl;
			break;
		}
		index++;
	}
	if (k == 1)
		std::cout << "-1" << std::endl;
	if (k == 0)
		std::cout << "-2" << std::endl;
	return 0;
}