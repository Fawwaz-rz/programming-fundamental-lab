/*factorial of a number*/

#include<iostream>
using namespace std;
void fac(int x)
{
	int fact = 1;
	for (int i = 1; i <= x; i++)
	{
		if (x == 0)
		{
			fact = 1;
		}
		else
		{
			fact = fact * i;
		}
	}
	cout << "factorial is " << fact << endl;
}
int main()
{
	int x;
	cout << "enter number 1 ";
	cin >> x;
	fac(x);
	system("pause");
}