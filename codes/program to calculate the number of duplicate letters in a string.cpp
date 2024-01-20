/*Write a C++ program to calculate the number of duplicate letters in a string. 
Input String:
Total number of unique characters of the said two strings.
Number of duplicate characters in the said string: 36*/

#include<iostream>
using namespace std;
int main()
{
	int num = 0, prev = 0, count = 1;
	string str, temp;
	cout << "Enter a number, other than zero: ";
	cin >> num;
	cout << "enter string";
	cin >> str;
	prev = num;
	temp = str;
	while (num != 0)
	{
		cout << "Enter string ";
		cin >> str;
		if (str == temp)
			count++;
		else
		{
			cout << temp << " occured " << count << " times" << endl;
			count = 1;
		}
		temp = str;
	}
	return 0;
}


/*#include <iostream>
#include<string>
using namespace std;
int main()
{
 int count = 0;
 string str;
 cout << "enter string";
 cin >> str;
 char ch;
 cout << "enter character";
 cin >> ch;
 
 for (int i = 0; i < str.length(); i++)
 {
 if (str[i] == ch)
 {
 ++count;
 }
 }
 cout << "Number of " << ch << " = " << count;
 return 0;
}*/