#include <iostream>


void MultiplyAndLog(int a, int b)
{
	int result = a * b;
	std::cout << "The result of multiplication is: " << result << std::endl;
}

int main()
{
	int number_a;
	std::cout << "Select number a:" << std::endl;
	std::cin >> number_a;
	int number_b;
	std::cout << "Select number b:" << std::endl;
	std::cin >> number_b;

	MultiplyAndLog(number_a, number_b);

	system("pause");

}