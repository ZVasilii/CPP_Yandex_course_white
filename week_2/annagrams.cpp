#include <iostream>
#include <map>

std::map<char, int> str_to_map (const std::string& str);

int main()
{
	int N{0};
	std::cin >> N;
	std::string src{""};
	std::string dst{""};
	for (int i = 0; i < N; ++i)
	{
		std::cin >> src;
		std::cin >> dst;
		if (str_to_map(src) == str_to_map(dst))
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	return 0;
}

std::map<char, int> str_to_map (const std::string& str)
{
	std::map<char, int> letters_map{};
	for (const char& letter : str)
		++letters_map[letter];
	return letters_map;
}