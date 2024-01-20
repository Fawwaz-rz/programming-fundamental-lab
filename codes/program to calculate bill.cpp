//program to calculate bill
#include<iostream>
int main()
{
	double an, cc, npc, bsc, bill;
	char r, b, bc;
	std::cout << "enter your account number";
	std::cin >> an;
	std::cout << "enter customer code";
	std::cin >> cc;
	std::cout << "enter number of premium channels";
	std::cin >> npc;
	std::cout << "enter business customer(b) or not(r)";
	std::cin >> bc;
	std::cout << "enter number of basic services connections";
	std::cin >> bsc;
	if (bc == 'r')
	{
		bill = 4.50 + (bsc * 20.50) + (npc * 7.50);
		std::cout << "your account number" << an << std::endl;
		std::cout << "your bill is" << bill;
	}
	else if (bc == 'b')
	{
		if (bsc > 10)
		{
			bill = 15.00 + (((bsc - 10) * 5.00) + 10 * 75.00) + (npc * 50.00);
			std::cout << "your account number" << an << std::endl;
			std::cout << "your bill is" << bill;
		}
		else if (bsc <= 10)
		{
			bill = 15.00 + (bsc * 75.00) + (npc * 50.00);
			std::cout << "your account number" << an << std::endl;
			std::cout << "your bill is" << bill;
		}
	}
}