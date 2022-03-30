#include <iostream>

void UpdateIfGreater(int first, int& second);

#if 0
int main()
{
	int a = 4;
	int b = 2;
	UpdateIfGreater(a,b);
	std::cout << "a = " << a  << " " << "b = " << b << std::endl;
	return 0;
}
#endif

void UpdateIfGreater(int first, int& second)
{
	if (first > second)
		second = first;
}