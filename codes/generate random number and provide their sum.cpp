/*generate random number and provide their sum*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int random()
{
	return (rand() % 6) + 1;
}
int main()
{
	srand(time(0));
	int num, i, n, sum = 0;
	cout << "Enter number " << endl;
	cin >> num;
	cout << "Random numbers in 1 to 6 \n";
	for (i = 1; i <= num; i++)
	{
		n = random();
		cout << n << endl;
		sum = sum + n;
	}
	cout << "Sum= " << endl << sum;
}