/*Write a decryption program for the same encryption program above and test your decrypted 
messages on that. Recheck those decrypted messages with given test cases.*/

#include <iostream>
#include<string>
using namespace std;
int main() {
	string str;
	string temp = "";
	cout << "Enter a string: ";
	getline(cin, str);
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			char ch = str[i];
			int num = ch;
			if (num % 2 == 0)
			{
				num -= 2;
				str[i] = num;
			}
			else if (num % 2 != 0)
			{
				num += 4;
				str[i] = num;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			char ch = str[i];
			int num = ch;
			num -= 3;
			str[i] = num;
		}
		if (str[i] == '#')
		{
			temp = str[i];
			str[i] = '$';
		}
		if (str[i] == '.')
		{
			temp = str[i];
			str[i] = ',';
		}
		if (str[i] == '%')
		{
			temp = str[i];
			str[i] = ':';
		}
	}
	cout << "Output String: " << str;
	return 0;
}
