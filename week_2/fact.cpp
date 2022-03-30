#if 0
#include <iostream>

int Factorial(int N);

int main()
{
	int N{0};
	std::cin >> N;
	std::cout << Factorial(N) << std::endl;
 	
}
#endif

int Factorial(int N)
{
	if ( N < 1)
		return 1;
	else
		return N * Factorial(N - 1);
}