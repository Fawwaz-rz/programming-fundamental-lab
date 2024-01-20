//program to apply grades on numbers
#include<iostream>
int main()
{
	int a;
	std::cout << "enter your marks";
	std::cin >> a;
	if (a < 50)
	{
		std::cout << "F";
	}
	else if (a >= 50 and a < 55)
	{
		std::cout << "D";
	}
	else if (a >= 55 and a < 60)
	{
		std::cout << "C";
	}
	else if (a >= 60 and a < 70)
	{
		std::cout << "B";
	}
	else if (a >= 70 and a < 80)
	{
		std::cout << "B+";
	}
	else if (a >= 80 and a < 90)
	{
		std::cout << "A";
	}
	else
	{
		std::cout << "A+";
	}
}