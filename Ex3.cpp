//Coppyright: Tran-Anh-Khoa Huynh (preferred name: Kay)
//This program will show the addition, subtraction, multiplication, division of two integers that the users enter!

//Here is the library
#include<iostream>

using namespace std;

//The program start here
int main() {
	//Declare var
	int a, b, add, sub, mul, div;
	char option;
	//Prompt the users to enter the input
	cout << "Please enter a number: " << endl;
	cin >> a;
	cout << "Please enter b number" << endl;
	cin >> b;

	//Here are the statements to do the math session;
	add = a + b;
	mul = a * b;

	cout << "Please choose a or b to become subtrahend and dividend" << endl;
	cin >> option;
	//Make a little bit complicated, we give the option for the users to choose the subtrahend and the dividend for a or b
	if (option == 'a') {
		sub = a - b;
		div = a / b;
	}
	else {
		sub = b - a;
		div = b / a;
	}
	//Print the output
	cout << "This is the addition: " << add << endl;
	cout << "This is the subtraction: " << sub << endl;
	cout << "This is the multiplication: " << mul << endl;
	cout << "This is the division: " << div << endl;
	cout << "....Complete Ex3!!!!!";
	return 0;
}
