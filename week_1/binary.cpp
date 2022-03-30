#include <iostream>
#include <vector>

int main()
{
	int N{0};
	std::vector<int> bin{};
	std::cin >> N;
	std::cout << std::endl;

	while (N > 0)
	{
		bin.push_back(N % 2);
		N /= 2;
	}

	for (int i = bin.size() - 1; i >= 0; i--)
		std::cout << bin[i];
	std::cout << std::endl;
	return 0;
}