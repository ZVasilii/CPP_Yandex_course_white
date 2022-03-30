#include <vector>
#include <iostream>

void swap(int& src, int& dest);
void Reverse(std::vector<int> & v);

#if 0
int main()
{
	std::vector<int> numbers = {1, 5, 3, 4, 2};
	Reverse(numbers);
	for (auto num : numbers)
		std::cout << num << " ";
	std::cout << std::endl;
	return 0;
}
#endif

void Reverse(std::vector<int> & v)
{
	for (unsigned int i = 0; i < v.size() / 2; i++)
		swap(v[i], v[v.size() - i - 1]);
}

void swap(int& src, int& dest)
{
	int tmp = src;
	src = dest;
	dest = tmp;
}