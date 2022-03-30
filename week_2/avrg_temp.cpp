#include <vector>
#include <iostream>

template <typename T>
void print_vector(const std::vector<T>& vec);

int main()
{
	int N {0};
	std::cin >> N;
	std::vector<int> temp(N);
	for (int i{0}; i < N; i++)
	{
		std::cin >> temp[i];
	}

	int sum {0};
	for (auto item : temp)
		sum += item;
	double avrg = sum / N;
	int count{0};
	std::vector<int> result{};

	for (int i{0}; i < N; i++)
	{
		if (temp[i] > avrg)
		{
			result.push_back(i);
			count++;
		}
	}
	std::cout << count << std::endl;
	print_vector<int>(result);
	return 0;
}

template <typename T>
void print_vector(const std::vector<T>& vec)
{
	for (const auto& item : vec)
		std::cout << item << " ";
	std::cout << std::endl;
}
