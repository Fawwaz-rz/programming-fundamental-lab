/*When a message is transmitted in secret code over a transmission channel, it is usually sent as a 
sequence of bits, that is, 0s and 1s. Due to noise in the transmission channel, the transmitted 
message may become corrupted. That is, the message received at the destination is not the same 
as the message transmitted; some of the bits may have been changed. 
There are several techniques to check the validity of the transmitted message at the destination. 
One technique is to transmit the same message twice. At the destination, both copies of the 
message are compared bit by bit. If the corresponding bits are the same, the message received is 
error-free.
Let’s write a program to check whether the message received at the destination is errorfree. For 
simplicity, assume that the secret code representing the message is a sequence of digits (0 to 9) 
and the maximum length of the message is 250 digits. 
Also, the first number in the message is the length of the message.
For example, if the
secret code is:
7 9 2 7 8 3 5 6
then the actual message is 7 digits long, and it is transmitted twice.
The above message is transmitted as:
7 9 2 7 8 3 5 6 7 9 2 7 8 3 5 6
Input Sequence of numbers containing the secret code and its copy
Output The secret code, its copy, and a message—if the received code is errorfree—in the
following form:
Code Digit Code Digit Copy
9 9
2 2
7 7
8 8
3 3
5 5
6 6
Message transmitted OK.
PROBLEM ANALYSIS AND ALGORITHM DESIGN
Because we have to compare the corresponding digits of the secret code and its copy, we first
read the secret code and store it in an array. Then we read the first digit of the copy and compare
it with the first digit of the secret code, and so on. If any of the corresponding digits are not the
same, we indicate this fact by printing a message next to the digits. Because the maximum length
of the message is 250, we use an array of 250 components. The first number in the secret code,
and in the copy of the secret code, indicates the length of the code.*/
#include <iostream>
using namespace std;
int main()
{
	int a[5], i, j, n, b[5];
	cout << "enter 1st digit ";
	cin >> a[0];
	n = a[0];
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
		}
		cout << endl;
		if (a[i] != b[i])
			cout << "not same";
		else
			cout << "same and code is error free";
	}
}