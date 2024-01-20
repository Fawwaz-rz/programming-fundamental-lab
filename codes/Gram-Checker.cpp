//You have to write a program for Gram - Checker, Gram - Checker checks your sentence and
//corrects if your text has any issue.
//Gram - Checker must do following things :  If a letter following full stop is lowercase, convert it into uppercase and add a space
//between them. insert a space when a lower character follows an upper character in a given string.
//Test your code on following inputs :
//
//LoremIpsum and the quick fox jumingToSea. and I must eatFood.food isGood for
//health. October 31, cityStreets are crowded, hidden in theChaos is the elementSo, am i.I must
//choose my targetsCarefully. TheyThinkIamHidingInTheShadows.But I amThe shadows.
#include<iostream>
#include <string>
using namespace std;
int main()
{
	string str, temp = "";
	cout << "enter string";
	getline(cin, str);
	char chr;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			if (str[i + 1] > 'a' && str[i + 1] < 'z')
			{
				chr = str[i + 1];
				int num;
				num = chr;
				num = num - 32;
				chr = num;
				str[i + 1] = chr;
			}
		cout << str[i + 1];
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			{
				str.insert(i + 1, " ");
			}

		}
	}