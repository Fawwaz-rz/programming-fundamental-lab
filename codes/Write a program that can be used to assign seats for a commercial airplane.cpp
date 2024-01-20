/*Write a program that can be used to assign seats for a commercial airplane. The airplane
has 13 rows, with six seats in each row. Rows 1 and 2 are first class, rows 3 through 7
are business class, and rows 8 through 13 are economy class. Your program must prompt
the user to enter the following information:
a. Ticket type (first class, business class, or economy class)
b. Desired seat
Output the seating plan in the following form:
Here, * indicates that the seat is available; X indicates that the seat is occupied. Make
this a menu-driven program; show the user’s choices and allow the user to make the
appropriate choices.*/


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, j, row_num, col_num, row, seat;
	char seat_resvr, availability[13][6], A[13][6], reserved[2], tic_type, seats;
	cout << "enter the desired seat\n";
	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			A[i][j] = '*';
		}
	}
	cin >> row >> seat;
	A[row - 1][seat - 1] = 'X';
	cout << " A B C D E F" << endl;
	for (int i = 0; i < 13; i++)
	{
		cout << "Row" << setw(3) << i + 1 << " ";
		for (int j = 0; j < 6; j++)
		{
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
}
