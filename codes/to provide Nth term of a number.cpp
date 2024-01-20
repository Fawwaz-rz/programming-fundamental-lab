/*to provide Nth term of a number*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int N;
	cout << "enter number";
	cin >> N;
	if (N % 2 == 0)
	{
		N = (N * ((N / 2) + ((N % 2) * 2) + N));
	}
	else
	{
		N = (N * ((N / 2) + ((N % 2) * 2) + N));
	}
	cout << "the Nth term is " << N << endl;
	system("pause");
}
Or
#include<iostream>
using namespace std;
int sum(int N)
{
	return (N * ((N / 2) + ((N % 2) * 2) + N));
}
int main()
{
	int N;
	cout << "Enter a number: ";
	cin >> N;
	cout << sum(N);
	system("pause");
}