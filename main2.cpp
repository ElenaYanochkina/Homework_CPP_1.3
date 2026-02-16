#include <iostream>

int main()
{
	int num1{};
	int num2{};
	int num3{};
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;
	std::cout << "Enter the third number: ";
	std::cin >> num3;
	std::cout << "Result: ";
	if (num1 >= num2)
	{
		if (num2 >= num3)
		{
			std::cout << num1 << " " << num2 << " " << num3;
		}
		else if (num1 >= num3)
		{
			std::cout << num1 << " " << num3 << " " << num2;
		}
		else {

			std::cout << num3 << " " << num1 << " " << num2;
		}
	}

	else {
		if (num1 >= num3)
		{
			std::cout << num2 << " " << num1 << " " << num3;
		}
		else if (num2 >= num3)
		{
			std::cout << num2 << " " << num3 << " " << num1;
		}
		else {
			std::cout << num3 << " " << num2 << " " << num1;
		}
	}

	return EXIT_SUCCESS;
}