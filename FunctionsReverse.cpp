#include <iostream>
#include <vector>
#include <string>

void ReverseVector(std::vector<std::string>& vec)
{
	std::string temp;
	for (auto i = 0; i < vec.size() / 2; i++)
	{
		temp = vec[i];
		vec[i] = vec[vec.size() - 1 - i];
		vec[vec.size() - 1 - i] = temp;
	}
}

void printVector(const std::vector<std::string>& vec)
{
	for (auto i : vec)
	{
		std::cout << i << ' ';
	}
}

int main()
{
	std::vector<std::string> vec = {"aaa", "bbb", "ccc"};
	std::cout << "Vector Before: ";
	printVector(vec);
	ReverseVector(vec);
	std::cout << "\nVector After:  ";
	printVector(vec);
	return 0;
}