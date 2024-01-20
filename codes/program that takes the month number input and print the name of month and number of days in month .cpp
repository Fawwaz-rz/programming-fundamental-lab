//Write a C++ program that takes the month number input and print the name of month and
//number of days in month.For example, if user enters 7, it should print “July” and “31”

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "please enter month number";
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "the month is january" << endl;
		cout << "the month days are 30" << endl;
		break;
	case 2:
		cout << "the month is february" << endl;
		cout << "the month days are 28" << endl;
		break;
	case 3:
		cout << "the month is march" << endl;
		cout << "the month days are 31" << endl;
		break;
	case 4:
		cout << "the month is april" << endl;
		cout << "the month days are 30" << endl;
		break;
	case 5:
		cout << "the month is may" << endl;
		cout << "the month days are 31" << endl;
		break;
	case 6:
		cout << "the month is june" << endl;
		cout << "the month days are 30" << endl;
		break;
	case 7:
		cout << "the month is july" << endl;
		cout << "the month days are 31" << endl;
		break;
	case 8:
		cout << "the month is august" << endl;
		cout << "the month days are 31" << endl;
		break;
	case 9:
		cout << "the month is september" << endl;
		cout << "the month days are 30" << endl;
		break;
	case 10:
		cout << "the month is october" << endl;
		cout << "the month days are 31" << endl;
		break;
	case 11:
		cout << "the month is november" << endl;
		cout << "the month days are 30" << endl;
		break;
	case 12:
		cout << "the month is december" << endl;
		cout << "the month days are 31" << endl;
		break;
	default:
		cout << "the month number is not correct" << endl;
		break;
	}
}