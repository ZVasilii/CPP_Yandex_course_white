
#include <iostream>
#include <vector>

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int minLength);
bool IsPalindrom(std::string str);

#if 0
int main()
{
	std::vector<std::string> test{"abacaba", "aba"};
	int min_length = 2;
	std::vector<std::string> result {"abacaba", "aba"};

	std::vector<std::string> checking = PalindromFilter(test, min_length);
	for (auto word : checking)
		std::cout << word << std::endl;

	if (result != PalindromFilter(test, min_length))
		std::cout << "Some error" << std::endl;
	else
		std::cout << "Everything is good" << std::endl;

 	
}
#endif

bool IsPalindrom(std::string str)
{
	if (str == "")
		return true;
	else
	{
		bool flag = true;
		for (unsigned i = 0; i < str.size() / 2; i++)
		{
			if (str[i] != str[str.size()  - 1 - i])
				flag = false;
		}
		return flag;
	}
}

std::vector<std::string> PalindromFilter(std::vector<std::string> words, int minLength)
{
	std::vector<std::string> result{};
	for (auto word : words)
	{
		if (IsPalindrom(word) && word.size() >= minLength)
			result.push_back(word);
	}
	return result;
}