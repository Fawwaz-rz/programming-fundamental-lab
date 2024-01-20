//Recall that in C++, while loops are used when a certain statement(s)must be executed repeatedly
//until certain conditions are met.Following is a C++ program that uses a while loop to find a
//Fibonacci number.
//Consider the following sequence of numbers :
//1, 1, 2, 3, 5, 8, 13, 21, 34, ....
//Given the first two numbers of the sequence(say, a1 and a2), the nth number an, n >= 3, of this
//sequence is given by :
//An = an - 1 + an - 2
//Thus :
//	a3 = a2 + a1 = 1 + 1 = 2.
//	a4 = a3 + a2 = 2 + 1 = 3.
//	and so on.
//	Such a sequence is called a Fibonacci sequence.In the preceding sequence, a2 = 1
//	and a1 = 1. However, given any first two numbers, using this process, you can
//	determine the nth number, an, n >= 3 of the sequence.The number determined this
//	way is called the nth Fibonacci number.Suppose a2 = 6 and a1 = 3.
//	Then:
//a3 = a2 + a1 = 6 + 3 = 9; a4 = a3 + a2 = 9 + 6 = 15
//Next, we write a program that determines the nth Fibonacci number given the first two numbers.
//
//Input The first two Fibonacci numbers and the desired Fibonacci number.
//Output The nth Fibonacci number

#include<iostream>
#include<assert.h>
using namespace std;
int main()
{
	int num1, num2, fi, sum, c = 1;
	cout << "please enter 1st number";
	cin >> num1;
	cout << "please enter 2nd number";
	cin >> num2;
	cout << "please enter fibonacci number";
	cin >> fi;
	cout << num1 << "," << num2;
	while (fi >= 3)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		cout << "," << sum;
		fi--;
	}
}