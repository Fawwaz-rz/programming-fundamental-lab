/*Write a C++ program that prints the diagonals of 8x8 matrix, find the sum of both diagonals, and 
interchange those diagonals and print the matrix. Take array elements input from user.
Hint: use Nested Loops*/

#include <iostream>
using namespace std;
int main()
{
	int a[8][8], sl = 0, sr = 0;
	cout << "Enter number";
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> a[i][j];
			if (i == j)
				sl += a[i][j];
			if ((i + j) == 8 - 1)
				sr += a[i][j];
		}
	}
	cout << "Sum of Left Diagonal: " << sl << endl;
	cout << "Sum of Right Diagonal: " << sr << endl;
	return 0;
}

/*#include <iostream>
using namespace std;
int main()
{
 int a[8][8],sl =0, sr = 0,sa[8][8],b[8],ab[8],i;
 cout << "Enter number";
 for(int i=0; i<8 ; i++)
 {
 for(int j=0; j<8; j++)
{
 cin >> a[i][j];
 if(i==j)
 sl += a[i][j];
 if((i+j) == 8-1)
 sr += a[i][j];
 }
 }
 cout << "Sum of Left Diagonal: "<< sl << endl;
 cout << "Sum of Right Diagonal: "<< sr << endl;
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
sa[i][j] = a[i][j];
if (i == j)
{
sa[i][j] = b[i];
}
}
}
for (int i = 0, j = 7; i < 8 && j >= 0; i++, j--)
{
sa[i][j] = ab[i];
}
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
cout << sa[i][j] << "\t";
}
cout << endl;
}
return 0;
}*/