////Write a C++ program that takes a string input from user and reverse it.
//Input: Hello world
//Output : dlrow olleH

#include <iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	string temp = "";
	cout << "enter string";
	getline(cin, str);
	for (int i = str.length() - 1; i >= 0; i--)
	{
		cout << str[i];
	}
}