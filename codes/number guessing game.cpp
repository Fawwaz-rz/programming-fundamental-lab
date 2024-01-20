/*number guessing game*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void func()
{
	int num, n;
	num = (rand() % 1000) + 1;
	cout << num << endl;
	cout << "I have a number between 1 and 1000. \nCan you guess my number? \n Please type your 
		first guess.";
		cin >> n;
	while (n != num)
	{
		if (n < num)
		{
			cout << "Too low. Try again." << endl;
		}
		else if (n > num)
		{
			cout << "Too high. Try again." << endl;
		}
		cout << "enter number " << endl;
		cin >> n;
	}
	cout << "Excellent!You guessed the number!";
}
int main()
{
	srand(time(0));
	char ch;
	do
	{
		func();
		cout << "Would you like to play again(y or n) ?" << endl;
		cout << "enter y or n ";
		cin >> ch;
		if (ch == 'n')
		{
			cout << "('-')";
			break;
		}
	} while (true);
}

/*#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
int n,num;
char ch;
srand(time(0));
n = (rand() % 1000) + 1;
cout << n<<endl;
cout << "I have a number between 1 and 1000.\nCan you guess my number?\n Please type 
your first guess.\n ";
cin >> num;
while (num != n)
{
if (num < n)
{
cout << "Too low. Try again.\n";
}
else if (num > n)
{
cout << "Too high. Try again.\n";
}
cout << "enter number ";
cin >> num;
}
while (num == n)
{
cout << "Excellent!You guessed the number!Would you like to play again(y or n) 
?\n";
cout << "enter y or n ";
cin >> ch;
if (ch == 'n')
{
cout << "have a nice day.";
break;
}
else if(ch=='y')
{
srand(time(0));
n = (rand() % 1000) + 1;
cout << n << endl;
cout << "enter number";
cin >> num;
}
}
}*/