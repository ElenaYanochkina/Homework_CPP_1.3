#include <iostream>;
#include <cmath>;
int main()
{
	int num1{};
	int num2{};
    std::string literalNum1{};
    std::string literalNum2{};
    std::string sign1{};
    std::string sign2{};
    bool flag{ true };
	std::cout << "Enter the first integer: ";
	std::cin >> num1;
	std::cout << "Enter the second integer: ";
	std::cin >> num2;

    if (num1 < 0)
        sign1 = "minus";
    else
        sign1 = "";
    if (num2 < 0)
        sign2 = "minus";
    else
        sign2 = "";

	switch (std::abs(num1))
	{
    case 1: literalNum1 = "one"; break;
    case 2: literalNum1 = "two"; break;
    case 3: literalNum1 = "three"; break;
    case 4: literalNum1 = "four"; break;
    case 5: literalNum1 = "five"; break;
    case 6: literalNum1 = "six"; break;
    case 7: literalNum1 = "seven"; break;
    case 8: literalNum1 = "eight"; break;
    case 9: literalNum1 = "nine"; break;
    case 10: literalNum1 = "ten"; break;
    case 11: literalNum1 = "eleven"; break;
    case 12: literalNum1 = "twelve"; break;
    case 13: literalNum1 = "thirteen"; break;
    case 14: literalNum1 = "fourteen"; break;
    case 15: literalNum1 = "fifteen"; break;
    case 16: literalNum1 = "sixteen"; break;
    case 17: literalNum1 = "seventeen"; break;
    case 18: literalNum1 = "eighteen"; break;
    case 19: literalNum1 = "nineteen"; break;
    case 20: literalNum1 = "twenty"; break;
    case 21: literalNum1 = "twenty-one"; break;
    case 22: literalNum1 = "twenty-two"; break;
    case 23: literalNum1 = "twenty-three"; break;
    case 24: literalNum1 = "twenty-four"; break;
    case 25: literalNum1 = "twenty-five"; break;
    case 26: literalNum1 = "twenty-six"; break;
    case 27: literalNum1 = "twenty-seven"; break;
    case 28: literalNum1 = "twenty-eight"; break;
    case 29: literalNum1 = "twenty-nine"; break;
    case 30: literalNum1 = "thirty"; break;
    case 31: literalNum1 = "thirty-one"; break;
    case 32: literalNum1 = "thirty-two"; break;
    case 33: literalNum1 = "thirty-three"; break;
    case 34: literalNum1 = "thirty-four"; break;
    case 35: literalNum1 = "thirty-five"; break;
    case 36: literalNum1 = "thirty-six"; break;
    case 37: literalNum1 = "thirty-seven"; break;
    case 38: literalNum1 = "thirty-eight"; break;
    case 39: literalNum1 = "thirty-nine"; break;
    case 40: literalNum1 = "forty"; break;
    case 41: literalNum1 = "forty-one"; break;
    case 42: literalNum1 = "forty-two"; break;
    case 43: literalNum1 = "forty-three"; break;
    case 44: literalNum1 = "forty-four"; break;
    case 45: literalNum1 = "forty-five"; break;
    case 46: literalNum1 = "forty-six"; break;
    case 47: literalNum1 = "forty-seven"; break;
    case 48: literalNum1 = "forty-eight"; break;
    case 49: literalNum1 = "forty-nine"; break;
    case 50: literalNum1 = "fifty"; break;
    case 51: literalNum1 = "fifty-one"; break;
    case 52: literalNum1 = "fifty-two"; break;
    case 53: literalNum1 = "fifty-three"; break;
    case 54: literalNum1 = "fifty-four"; break;
    case 55: literalNum1 = "fifty-five"; break;
    case 56: literalNum1 = "fifty-six"; break;
    case 57: literalNum1 = "fifty-seven"; break;
    case 58: literalNum1 = "fifty-eight"; break;
    case 59: literalNum1 = "fifty-nine"; break;
    case 60: literalNum1 = "sixty"; break;
    case 61: literalNum1 = "sixty-one"; break;
    case 62: literalNum1 = "sixty-two"; break;
    case 63: literalNum1 = "sixty-three"; break;
    case 64: literalNum1 = "sixty-four"; break;
    case 65: literalNum1 = "sixty-five"; break;
    case 66: literalNum1 = "sixty-six"; break;
    case 67: literalNum1 = "sixty-seven"; break;
    case 68: literalNum1 = "sixty-eight"; break;
    case 69: literalNum1 = "sixty-nine"; break;
    case 70: literalNum1 = "seventy"; break;
    case 71: literalNum1 = "seventy-one"; break;
    case 72: literalNum1 = "seventy-two"; break;
    case 73: literalNum1 = "seventy-three"; break;
    case 74: literalNum1 = "seventy-four"; break;
    case 75: literalNum1 = "seventy-five"; break;
    case 76: literalNum1 = "seventy-six"; break;
    case 77: literalNum1 = "seventy-seven"; break;
    case 78: literalNum1 = "seventy-eight"; break;
    case 79: literalNum1 = "seventy-nine"; break;
    case 80: literalNum1 = "eighty"; break;
    case 81: literalNum1 = "eighty-one"; break;
    case 82: literalNum1 = "eighty-two"; break;
    case 83: literalNum1 = "eighty-three"; break;
    case 84: literalNum1 = "eighty-four"; break;
    case 85: literalNum1 = "eighty-five"; break;
    case 86: literalNum1 = "eighty-six"; break;
    case 87: literalNum1 = "eighty-seven"; break;
    case 88: literalNum1 = "eighty-eight"; break;
    case 89: literalNum1 = "eighty-nine"; break;
    case 90: literalNum1 = "ninety"; break;
    case 91: literalNum1 = "ninety-one"; break;
    case 92: literalNum1 = "ninety-two"; break;
    case 93: literalNum1 = "ninety-three"; break;
    case 94: literalNum1 = "ninety-four"; break;
    case 95: literalNum1 = "ninety-five"; break;
    case 96: literalNum1 = "ninety-six"; break;
    case 97: literalNum1 = "ninety-seven"; break;
    case 98: literalNum1 = "ninety-eight"; break;
    case 99: literalNum1 = "ninety-nine"; break;
    case 100: literalNum1 = "one hundred"; break;
    default:
        flag = false;
        std::cout << "Error! One of the numbers is out of range!" << std::endl; 
        break;
    }

    switch (std::abs(num2))
    {
    case 1: literalNum2 = "one"; break;
    case 2: literalNum2 = "two"; break;
    case 3: literalNum2 = "three"; break;
    case 4: literalNum2 = "four"; break;
    case 5: literalNum2 = "five"; break;
    case 6: literalNum2 = "six"; break;
    case 7: literalNum2 = "seven"; break;
    case 8: literalNum2 = "eight"; break;
    case 9: literalNum2 = "nine"; break;
    case 10: literalNum2 = "ten"; break;
    case 11: literalNum2 = "eleven"; break;
    case 12: literalNum2 = "twelve"; break;
    case 13: literalNum2 = "thirteen"; break;
    case 14: literalNum2 = "fourteen"; break;
    case 15: literalNum2 = "fifteen"; break;
    case 16: literalNum2 = "sixteen"; break;
    case 17: literalNum2 = "seventeen"; break;
    case 18: literalNum2 = "eighteen"; break;
    case 19: literalNum2 = "nineteen"; break;
    case 20: literalNum2 = "twenty"; break;
    case 21: literalNum2 = "twenty-one"; break;
    case 22: literalNum2 = "twenty-two"; break;
    case 23: literalNum2 = "twenty-three"; break;
    case 24: literalNum2 = "twenty-four"; break;
    case 25: literalNum2 = "twenty-five"; break;
    case 26: literalNum2 = "twenty-six"; break;
    case 27: literalNum2 = "twenty-seven"; break;
    case 28: literalNum2 = "twenty-eight"; break;
    case 29: literalNum2 = "twenty-nine"; break;
    case 30: literalNum2 = "thirty"; break;
    case 31: literalNum2 = "thirty-one"; break;
    case 32: literalNum2 = "thirty-two"; break;
    case 33: literalNum2 = "thirty-three"; break;
    case 34: literalNum2 = "thirty-four"; break;
    case 35: literalNum2 = "thirty-five"; break;
    case 36: literalNum2 = "thirty-six"; break;
    case 37: literalNum2 = "thirty-seven"; break;
    case 38: literalNum2 = "thirty-eight"; break;
    case 39: literalNum2 = "thirty-nine"; break;
    case 40: literalNum2 = "forty"; break;
    case 41: literalNum2 = "forty-one"; break;
    case 42: literalNum2 = "forty-two"; break;
    case 43: literalNum2 = "forty-three"; break;
    case 44: literalNum2 = "forty-four"; break;
    case 45: literalNum2 = "forty-five"; break;
    case 46: literalNum2 = "forty-six"; break;
    case 47: literalNum2 = "forty-seven"; break;
    case 48: literalNum2 = "forty-eight"; break;
    case 49: literalNum2 = "forty-nine"; break;
    case 50: literalNum2 = "fifty"; break;
    case 51: literalNum2 = "fifty-one"; break;
    case 52: literalNum2 = "fifty-two"; break;
    case 53: literalNum2 = "fifty-three"; break;
    case 54: literalNum2 = "fifty-four"; break;
    case 55: literalNum2 = "fifty-five"; break;
    case 56: literalNum2 = "fifty-six"; break;
    case 57: literalNum2 = "fifty-seven"; break;
    case 58: literalNum2 = "fifty-eight"; break;
    case 59: literalNum2 = "fifty-nine"; break;
    case 60: literalNum2 = "sixty"; break;
    case 61: literalNum2 = "sixty-one"; break;
    case 62: literalNum2 = "sixty-two"; break;
    case 63: literalNum2 = "sixty-three"; break;
    case 64: literalNum2 = "sixty-four"; break;
    case 65: literalNum2 = "sixty-five"; break;
    case 66: literalNum2 = "sixty-six"; break;
    case 67: literalNum2 = "sixty-seven"; break;
    case 68: literalNum2 = "sixty-eight"; break;
    case 69: literalNum2 = "sixty-nine"; break;
    case 70: literalNum2 = "seventy"; break;
    case 71: literalNum2 = "seventy-one"; break;
    case 72: literalNum2 = "seventy-two"; break;
    case 73: literalNum2 = "seventy-three"; break;
    case 74: literalNum2 = "seventy-four"; break;
    case 75: literalNum2 = "seventy-five"; break;
    case 76: literalNum2 = "seventy-six"; break;
    case 77: literalNum2 = "seventy-seven"; break;
    case 78: literalNum2 = "seventy-eight"; break;
    case 79: literalNum2 = "seventy-nine"; break;
    case 80: literalNum2 = "eighty"; break;
    case 81: literalNum2 = "eighty-one"; break;
    case 82: literalNum2 = "eighty-two"; break;
    case 83: literalNum2 = "eighty-three"; break;
    case 84: literalNum2 = "eighty-four"; break;
    case 85: literalNum2 = "eighty-five"; break;
    case 86: literalNum2 = "eighty-six"; break;
    case 87: literalNum2 = "eighty-seven"; break;
    case 88: literalNum2 = "eighty-eight"; break;
    case 89: literalNum2 = "eighty-nine"; break;
    case 90: literalNum2 = "ninety"; break;
    case 91: literalNum2 = "ninety-one"; break;
    case 92: literalNum2 = "ninety-two"; break;
    case 93: literalNum2 = "ninety-three"; break;
    case 94: literalNum2 = "ninety-four"; break;
    case 95: literalNum2 = "ninety-five"; break;
    case 96: literalNum2 = "ninety-six"; break;
    case 97: literalNum2 = "ninety-seven"; break;
    case 98: literalNum2 = "ninety-eight"; break;
    case 99: literalNum2 = "ninety-nine"; break;
    case 100: literalNum2 = "one hundred"; break;
    default: 
        flag = false;
        std::cout << "Error! One of the numbers is out of range!" << std::endl;
        break;
    }
    if (flag)
    {
        if (num1 > num2)
        {
            std::cout << sign1 << " " << literalNum1 << " is bigger than " << sign2 << " " << literalNum2 << std::endl;
        }
        else if (num1 < num2)
        {
            std::cout << sign1 << " " << literalNum1 << " is smaller than " << sign2 << " " << literalNum2 << std::endl;
        }
        else {
            std::cout << sign1 << " " << literalNum1 << " equals " << sign2 << " " << literalNum2 << std::endl;
        }
    }
    else {
        std::cout << "Try again." << std::endl;
    }

    std::cout << "\n\n\n";

    return EXIT_SUCCESS;
}