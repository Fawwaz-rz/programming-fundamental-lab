/*Write a program that takes a number input from user and prints the factorial of that number.
*/

#include<iostream>
#include<assert.h>
using namespace std;
int main()
{
	int num1, fac = 1;
	cout << "please enter number";
	cin >> num1;
	while (num1 >= 1)
	{
		fac *= num1;
		num1--;
	}
	cout << "the factorial is:" << fac;
}