/*Write a C++ program that takes a number input and checks if it’s prime or not, If it’s prime, your 
program should print the number and prints “Prime numbers are good”, if it’s not prime, your 
program should abort without printing anything. 
Hint: use assert( )*/

#include<iostream>
#include<assert.h>
using namespace std;
int main()
{
	int c = 2, i, num, prime;
	cout << "please enter number";
	cin >> num;
	prime = true;
	while (c < num)
	{
		if (num % c == 0)
		{
			prime = false;
		}
		c++;
	}
	assert(prime == true);
	cout << "prime numbers are good";
}