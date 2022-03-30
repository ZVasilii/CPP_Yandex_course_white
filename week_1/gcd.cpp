#include <iostream>

int main()
{
	int a{0}, b{0}, t{0};
	std::cin >> a >> b;
	while (b != 0)
	{
		t = b;
		b = a % b;
		a = t;
	}
	std::cout << a << std::endl;
	return 0;
}