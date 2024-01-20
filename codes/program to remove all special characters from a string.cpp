/*Write a C++ program to remove all special characters from a string.
Input: Hello, my name is Ali. I hate to code :(, but I’ll love it one day.
Output: Hello my name is Ali I hate to code but Ill love it one day*/

#include <iostream>
#include<string>
using namespace std;
int main() {
	string str;
	string temp = " ";
	cout << "Enter a string: ";
	getline(cin, str);
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] > 'a' && str[i] < 'z' || str[i] >'A' && str[i] < 'Z')
		{
			temp = temp + str[i];
		}
	}
	str = temp;
	cout << "Output String: " << str;
	return 0;
}