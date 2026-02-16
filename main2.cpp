#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int num1{};
	int num2{};
	int num3{};
	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;
	std::cout << "Введите третье число: ";
	std::cin >> num3;
	std::cout << "Результат: ";
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
