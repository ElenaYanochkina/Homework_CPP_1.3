#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	bool t{ true };
	bool f{ false };
	int result{};
	std::string word{};
	std::cout << "Оператор: ||" << std::endl;
	result = t || t;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "true	true	" << word << std::endl;
	result = f || t;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "false	true	" << word << std::endl;
	result = t || f;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "true	false	" << word << std::endl;
	result = f || f;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "false	false	" << word << std::endl;
	


	std::cout << "Оператор: &&" << std::endl;
	result = t && t;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "true	true	" << word << std::endl;
	result = f && t;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "false	true	" << word << std::endl;
	result = t && f;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "true	false	" << word << std::endl;
	result = f && f;
	if (result)
		word = "true";
	else word = "false";
	std::cout << "false	false	" << word << std::endl;

	return EXIT_SUCCESS;

}
