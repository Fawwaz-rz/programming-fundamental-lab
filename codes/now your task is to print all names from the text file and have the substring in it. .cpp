/*You have been given a names.txt file. You will take a “string input” from the user, now your 
task is to print all names from the text file and have the substring in it.
*/

#include<iostream>
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string str, strr;
	cout << "enter the string you want to find";
	cin >> str;
	ifstream rd;
	rd.open("a.text");
	if (rd.is_open())
	{
		cout << "file is open\n";
		while (!rd.eof())
		{
			rd >> strr;
			for (int i = 0; i < str.length(); i++)
			{
				for (int j = 0; j < strr.length(); j++)
				{
					if (str[i] == strr[j])
					{
						if (str[i + 1] == strr[j + 1])
						{
							if (str[i + 2] == strr[j + 2])
							{
								cout << strr << endl;
							}
						}
					}
				}
			}
		}
	}
	else
	{
		cout << "file is not open";
	}
}