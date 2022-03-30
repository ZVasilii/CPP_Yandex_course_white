#include <iostream>
#include <cmath>

void solve_square(double a, double b, double c);
void solve_linear(double a, double b);

int main()
{
	double a{0}, b{0}, c{0};
	std::cin >> a >> b >> c;
	if (a != 0)
		solve_square(a,b,c);
	if (a == 0 && b != 0)
		solve_linear(b,c);
	if (a == 0 && b == 0 && c == 0)
		std::cout << "";
	if (a == 0 && b == 0 && c != 0)
		std::cout << "";
	return 0;
}

void solve_square(double a, double b, double c)
{
	double D = b * b - 4 * a * c;
	if (D == 0) 
	{
		double x = - b / 2 / a;
		if (x == - 0) 
			x = 0;
		std::cout << x << std::endl;
	}
	else if (D > 0) 
	{
		double x1 = (- b + sqrt(D)) / 2 / a;
		double x2 = (- b - sqrt(D)) / 2 / a;
		std::cout << x1 << " " << x2 << std::endl;
	}
	else if (D < 0)
		std::cout << "";
}

void solve_linear(double b, double c)
{
	double x = - c / b;
	if (x == - 0) 
		x = 0;
	std::cout << x << std::endl;
}