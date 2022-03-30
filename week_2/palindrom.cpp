#if 0
#include <iostream>

bool isPalindrom(std::string str);

int main()
{
	std::string str{""};
	std::cin >> str;
	std::cout << IsPalindrom(str) << std::endl;
 	
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