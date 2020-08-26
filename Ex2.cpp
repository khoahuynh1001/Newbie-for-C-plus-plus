//Coppyright: Tran-Anh-Khoa Huynh (preferred name: Kay)
//This program will check number odd or even, and also check positive or negative

//Here is your library where can help you use the function or command
#include<iostream>					//This library is used for the input and output

using namespace std;

//Create a function main
int main() {
	//declare the variable
	int number;				// this variable will store the number you want to check

	//Print the announcement for the user!
	cout << "Please enter the number to check: " << endl;
	cin >> number;

	//Here is the algorithm to check the number
	// If statement will help you make a condition for checking
	if (number % 2 == 0) {										//If it correct, this is a even number!
		cout << "This is a even number!" << endl;
	}
	if (number % 2 != 0) {										//This is not a even number!							
		cout << "This is a odd number!" << endl;
	}
	if (number < 0) {											//If it correct it is a negative number!
		cout << "This is a negative number!" << endl;
	}
	if (number > 0) {											//This is not a negative number!
		cout << "This is a positive number!" << endl;
	}

	cout << "Complete Ex2....!";
	return 0;
}