//Make a menu driven simple calculator using switch case.Do not use any if else.For(-, +, / , *)

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1, num2;
	char func;
	cout << "please enter 1st number";
	cin >> num1;
	cout << "please enter 2nd number";
	cin >> num2;
	cout << "please enter function";
	cin >> func;
	switch (func)
	{
	case '+':
		cout << num1 + num2 << endl;
		break;
	case '-':
		cout << num1 - num2 << endl;
		break;
	case '*':
		cout << num1 * num2 << endl;
		break;
	case '/':
		cout << num1 / num2 << endl;
		break;
	default:
		cout << "the function is not correct" << endl;
		break;
	}
}
