/*Suppose you are required to make a software that will take input data of students’ information 
from the user and you are to save it permanently.
Now we’ve studied file handling and we know that to save content on the disk it is highly useful. 
You are required to create the following functions:
Now in the main function, first ask the user for the batch, you will be using the batch name as the 
file name, e.g. for your batch the file name would be “batch2022.txt”. take students’ data as 
input, pass it on to the saveDataToFile function, so it may be saved in the file. Keep taking input 
of students as long as the user wants. Once done, clear your console using system("CLS") and 
then print data of all students.*/#include<iostream>
#include<string>
#include<fstream>
using namespace std;
bool saveDataToFile(string name, long long int rollNum, int CNIC, string degree, string fileName)
{
	ofstream obj;
	obj.open(fileName.c_str(), ios::app);
	obj << name << endl << rollNum << endl << CNIC << endl << degree << endl;
	return 1;
}
bool readAndPrintData(string fileName)
{
	ifstream obj1;
	obj1.open(fileName.c_str());
	while (!obj1.eof())
	{
		obj1 >> fileName;
		cout << fileName << endl;
	}
	return 0;
}
int main()
{
	long long int n;
	string fn;
	cout << "to enter student info enter 1 if not enter any number";
	cin >> n;
	cout << "enter file name" << endl;
	cin >> fn;
	while (n == 1)
	{
		string str, deg;
		long long int rn, cn;
		cout << "enter name " << endl;
		cin >> str;
		cout << "enter roll number" << endl;
		cin >> rn;
		cout << "enter CNIC" << endl;
		cin >> cn;
		cout << "enter degree" << endl;
		cin >> deg;
		cout << saveDataToFile(str, rn, cn, deg, fn);
		cout << "to enter student info enter 1 if not enter any number";
		cin >> n;
	}
	cout << readAndPrintData(fn);
	return 0;
}
