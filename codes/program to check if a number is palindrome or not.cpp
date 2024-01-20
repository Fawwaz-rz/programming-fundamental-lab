//program to check if a number is palindrome or not
#include<iostream>
int main()
{
	int a, num, pali, b, c, d, r;
	std::cout << "enter your number";
	std::cin >> num;
	if (num > 9999)
	{
		if (num < 99999)
		{
			a = (num / 10000);
			b = (num % 10000) / 1000;
			c = (num % 1000) / 100;
			d = (num % 100) / 10;
			r = (num % 10);
			pali = (r * 10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);
			std::cout << pali << std::endl;
			if (num == pali)
			{
				std::cout << "this is palindrome" << std::endl;
			}
			else
			{
				std::cout << "this is not palindrome" << std::endl;
			}
		}
	}
	else
	{
		std::cout << "enter correct number";
	}
}