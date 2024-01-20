/*Given a 2-Dimensional array of 10 X 10, find the largest element and smallest element in it. Use 
Nested Loops only. Take array elements input from user.*/

#include<iostream>
using namespace std;
int main()
{
	int a[10][10], lar = 0, min = 99999999;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "enter number";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (a[i][j] > lar)
			{
				lar = a[i][j];
			}
			if (a[i][j] < min)
			{
				min = a[i][j];
			}
		}
	}cout << "maximum value is " << lar << endl;
	cout << "minimum value is " << min << endl;
}