//Coppyright: Tran-Anh-Khoa Huynh (preferred name: Kay)
//This program will compare two numbers

//Declare library
#include <iostream>

using namespace std;

//Main Function
int main() {
	//declare vars
	int a, b;

	//Prompt the users enter the input
	cout << "Please enter the number a: ";
	cin >> a;
	cout << "Please enter the number b: ";
	cin >> b;

	//Here is the if condition to compare the numbers
	if (a > b) {
		cout << "number a is bigger than number b" << endl;
	}
	else if (a < b) {
		cout << "number a is smaller than number b" << endl;
	}
	else
	{
		cout << "number a is equal number b" << endl;
	}

	cout << "Complete Ex4....!";
	return 0;
}