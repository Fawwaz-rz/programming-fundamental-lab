/*Write a C++ Program to Find the Transpose of a 7x7 Matrix. Use Nested Loops only.
Problem Description
The program takes a matrix and prints the transpose of the matrix. In a transpose matrix, rows
become columns and vice versa. Take array elements input from user.*/

#include <iostream>
using namespace std;
int main()
{
	int a[7][7], transpose[7][7], col, i, row, j;
	cout << "Enter rows and cols of matrix: ";
	cin >> row >> col;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << "Enter number";
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < col; ++i)
		for (int j = 0; j < row; ++j)
		{
			cout << " " << transpose[i][j];
			if (j == row - 1)
				cout << endl << endl;
		}

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
		{
			transpose[j][i] = a[i][j];
		}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << " " << a[i][j];
			if (j == col - 1)
				cout << endl << endl;
		}
	}

	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
		{
			transpose[j][i] = a[i][j];
		}

	return 0;
}