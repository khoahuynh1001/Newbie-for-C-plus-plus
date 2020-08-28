//Coppyright: Tran-Anh-Khoa Huynh (preferred name: Kay)
//This program find the greatest number

//Declare library
#include<iostream>

using namespace std;

//Function main
int main() {
	//Declare vars
	double a, b, c, d, max;

	//Prompt the users to enter the input
	cout << "Enter the number a: ";
	cin >> a;
	cout << "Enter the number b: ";
	cin >> b;
	cout << "Enter the number c: ";
	cin >> c;
	cout << "Enter the number d: ";
	cin >> d;

	//The program start here with condition to find greatest number
	if (a > b && a > c && a > d) {
		max = a;
		cout << "a is the greatest number" << max << endl;
	}
	else if (b > a && b > c && b > d) {
		max = b;
		cout << "b is the greatest number" << max << endl;
	}
	else if (c > a && c > b && c > d) {
		max = c;
		cout << "a is the greatest number" << max << endl;
	}
	if (d > a && d > b && d > c) {
		max = a;
		cout << "a is the greatest number" << max << endl;
	}
	cout << "Complete Ex5 ...!";
	return 0;
}