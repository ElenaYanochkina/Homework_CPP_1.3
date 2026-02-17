#include <iostream>;
#include <cmath>;
#include <clocale>
int main()
{
    setlocale(LC_ALL, "rus");
	int num1{};
    int num1_digit1{};
    int num1_digit2{};
	int num2{};
    int num2_digit1{};
    int num2_digit2{};
    int abs_num1{};
    int abs_num2{};
    std::string literal_num1_digit1{};
    std::string literal_num1_digit2{};
    std::string literal_num2_digit1{};
    std::string literal_num2_digit2{};
    std::string sign1{};
    std::string sign2{};
    bool flag{ true };
    char extra_space1 = ' ';
    char extra_space2 = ' ';
	std::cout << "Введите целое число: ";
	std::cin >> num1;
	std::cout << "Введите целое число: ";
	std::cin >> num2;
    abs_num1 = std::abs(num1);
    abs_num2 = std::abs(num2);

    if (num1 < 0)
        sign1 = "минус ";
    else
        sign1 = "";
    if (num2 < 0)
        sign2 = "минус ";
    else
        sign2 = "";
    num1_digit1 = abs_num1 / 10;
    num1_digit2 = abs_num1 % 10;
    num2_digit1 = abs_num2 / 10;
    num2_digit2 = abs_num2 % 10;

    if (abs_num1 < 10)
    {
        num1_digit1 = abs_num1;
        literal_num1_digit2 = "";
        extra_space1 = 0;
        switch (num1_digit1)
        {
        case 0: literal_num1_digit1 = "ноль"; break;
        case 1: literal_num1_digit1 = "один"; break;
        case 2: literal_num1_digit1 = "два"; break;
        case 3: literal_num1_digit1 = "три"; break;
        case 4: literal_num1_digit1 = "четыре"; break;
        case 5: literal_num1_digit1 = "пять"; break;
        case 6: literal_num1_digit1 = "шесть"; break;
        case 7: literal_num1_digit1 = "семь"; break;
        case 8: literal_num1_digit1 = "восемь"; break;
        case 9: literal_num1_digit1 = "девять"; break;
        }
    }
    else if (abs_num1 < 20)
    {
        literal_num1_digit2 = "";
        extra_space1 = 0;
        switch (num1_digit2)
        {
        case 0: literal_num1_digit1 = "десять"; break;
        case 1: literal_num1_digit1 = "одиннадцать"; break;
        case 2: literal_num1_digit1 = "двенадцать"; break;
        case 3: literal_num1_digit1 = "тринадцать"; break;
        case 4: literal_num1_digit1 = "четырнадцать"; break;
        case 5: literal_num1_digit1 = "пятнадцать"; break;
        case 6: literal_num1_digit1 = "шестнадцать"; break;
        case 7: literal_num1_digit1 = "семнадцать"; break;
        case 8: literal_num1_digit1 = "восемнадцать"; break;
        case 9: literal_num1_digit1 = "девятнадцать"; break;
        }
    }
    else if (abs_num1 < 100)
    {
        switch (num1_digit1)
        {
        case 2: literal_num1_digit1 = "двадцать"; break;
        case 3: literal_num1_digit1 = "тридцать"; break;
        case 4: literal_num1_digit1 = "сорок"; break;
        case 5: literal_num1_digit1 = "пятьдесят"; break;
        case 6: literal_num1_digit1 = "шестьдесят"; break;
        case 7: literal_num1_digit1 = "семьдесят"; break;
        case 8: literal_num1_digit1 = "восемьдесят"; break;
        case 9: literal_num1_digit1 = "девяносто"; break;
        }
        switch (num1_digit2)
        {
        case 0: literal_num1_digit2 = ""; extra_space1 = 0; break;
        case 1: literal_num1_digit2 = "один"; break;
        case 2: literal_num1_digit2 = "два"; break;
        case 3: literal_num1_digit2 = "три"; break;
        case 4: literal_num1_digit2 = "четыре"; break;
        case 5: literal_num1_digit2 = "пять"; break;
        case 6: literal_num1_digit2 = "шесть"; break;
        case 7: literal_num1_digit2 = "семь"; break;
        case 8: literal_num1_digit2 = "восемь"; break;
        case 9: literal_num1_digit2 = "девять"; break;
        }
    }
    else
    {
        flag = false;
        std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
    }

    if (abs_num2 < 10)
    {
        num2_digit1 = abs_num2;
        literal_num2_digit2 = "";
        extra_space2 = 0;
        switch (num2_digit1)
        {
        case 0: literal_num2_digit1 = "ноль"; break;
        case 1: literal_num2_digit1 = "один"; break;
        case 2: literal_num2_digit1 = "два"; break;
        case 3: literal_num2_digit1 = "три"; break;
        case 4: literal_num2_digit1 = "четыре"; break;
        case 5: literal_num2_digit1 = "пять"; break;
        case 6: literal_num2_digit1 = "шесть"; break;
        case 7: literal_num2_digit1 = "семь"; break;
        case 8: literal_num2_digit1 = "восемь"; break;
        case 9: literal_num2_digit1 = "девять"; break;
        }
    }
    else if (abs_num2 < 20)
    {
        literal_num2_digit2 = "";
        extra_space2 = 0;
        switch (num2_digit2)
        {
        case 0: literal_num2_digit1 = "десять"; break;
        case 1: literal_num2_digit1 = "одиннадцать"; break;
        case 2: literal_num2_digit1 = "двенадцать"; break;
        case 3: literal_num2_digit1 = "тринадцать"; break;
        case 4: literal_num2_digit1 = "четырнадцать"; break;
        case 5: literal_num2_digit1 = "пятнадцать"; break;
        case 6: literal_num2_digit1 = "шестнадцать"; break;
        case 7: literal_num2_digit1 = "семнадцать"; break;
        case 8: literal_num2_digit1 = "восемнадцать"; break;
        case 9: literal_num2_digit1 = "девятнадцать"; break;
        }
    }
    else if (abs_num2 < 100)
    {
        switch (num2_digit1)
        {
        case 2: literal_num2_digit1 = "двадцать"; break;
        case 3: literal_num2_digit1 = "тридцать"; break;
        case 4: literal_num2_digit1 = "сорок"; break;
        case 5: literal_num2_digit1 = "пятьдесят"; break;
        case 6: literal_num2_digit1 = "шестьдесят"; break;
        case 7: literal_num2_digit1 = "семьдесят"; break;
        case 8: literal_num2_digit1 = "восемьдесят"; break;
        case 9: literal_num2_digit1 = "девяносто"; break;
        }
        switch (num2_digit2)
        {
        case 0: literal_num2_digit2 = ""; extra_space2 = 0; break;
        case 1: literal_num2_digit2 = "один"; break;
        case 2: literal_num2_digit2 = "два"; break;
        case 3: literal_num2_digit2 = "три"; break;
        case 4: literal_num2_digit2 = "четыре"; break;
        case 5: literal_num2_digit2 = "пять"; break;
        case 6: literal_num2_digit2 = "шесть"; break;
        case 7: literal_num2_digit2 = "семь"; break;
        case 8: literal_num2_digit2 = "восемь"; break;
        case 9: literal_num2_digit2 = "девять"; break;
        }
    }
    else
    {
        flag = false;
        std::cout << "Ошибка! Одно из чисел вне диапазона!" << std::endl;
    }

   
    if (flag)
    {
        if (num1 > num2)
        {
            std::cout << sign1 << literal_num1_digit1 << extra_space1 << literal_num1_digit2
                << " больше, чем " << sign2 << literal_num2_digit1 << extra_space2 << literal_num2_digit2 << std::endl;
        }
        else if (num1 < num2)
        {
            std::cout << sign1 << literal_num1_digit1 << extra_space1 << literal_num1_digit2
                << " меньше, чем " << sign2 << literal_num2_digit1 << " " << literal_num2_digit2 << std::endl;
        }
        else {
            std::cout << sign1 << " " << literal_num1_digit1 << extra_space1 << literal_num1_digit2
                << " равно " << sign2 << literal_num2_digit1 << extra_space2 << literal_num2_digit2 << std::endl;
        }
    }
    else {
        std::cout << "Попробуйте ещё раз." << std::endl;
    }

    std::cout << "\n\n\n";

    return EXIT_SUCCESS;
}
