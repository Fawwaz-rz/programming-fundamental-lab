/*Whatsapp is big part of our life, and the chats on whatsapp are encrypted. Write an encryption 
program that takes an input from user and prints the encrypted message

Encryption Algorithm
First your program must check each character is uppercase or lowercase. If character is
uppercase check if it’s ascii value if even or odd. If the ascii is odd, the character must be
changed with offset of +2, or if ascii is even, character must be changed with offset of -4 e.g., if
character is A change it to C, or if character is P change it with L.
Now if Character is lowercase, you do not have to check even or odd, just change the character
with offset of +3. E.g., if character is z, change it with c.
Every Space must be replaced with $, comma (,) and apostrophe (‘) will be replaced with # and
full stop (.) with %.
Test your encryption program on following inputs:  When I was just a kid’ they said, Kid don’t you cry.  Attack on Base, we’re coming for your aid.  I’m going to make a very beautiful life for myself, no matter what it takes.
*/


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
				num += 2;
				str[i] = num;
			}
			else if (num % 2 != 0)
			{
				num -= 4;
				str[i] = num;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			char ch = str[i];
			int num = ch;
			num += 3;
			str[i] = num;
		}
		if (str[i] == '$')
		{
			temp = str[i];
			str[i] = '#';
		}
		if (str[i] == ',')
		{
			temp = str[i];
			str[i] = '.';
		}
		if (str[i] == ':')
		{
			temp = str[i];
			str[i] = '%';
		}
	}
	cout << "Output String: " << str;
	return 0;
}
