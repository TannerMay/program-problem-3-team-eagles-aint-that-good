/*
Connor Castillo - Period 1
Assignment 3
3 Digit Number 
*/
// Libraries
#include <iostream>
#include <conio.h>
// Namespaces
using namespace std;
// Functions()
void pause() {
	cout << "Press any key to continue";
	while (!_kbhit());
	_getch();
	cout << "\n";
}
// MAIN
void main() {
	// Variables
	int var_number;
	
		cout << "Enter a three digit number";
		cout << "\n";
		cin >> var_number;

		int A = (var_number/100)% 10;
		int B = (var_number/10)%10;
		int C = var_number%10;
		
		if (var_number < 1000) {

		}
		else {
			cout << "Invalid Number";
			cout << "\n";
		}
	
		if (C > B) {
			if (B > A) {
				cout << "It is ascending.";
				cout << "\n";
			}
		}
			else if (A > B) {
				if (B > C)
					cout << "it is decending.";
				cout << "\n";
			}

			else {
				cout << "it is neither.";
				cout << "\n";
			}


		;pause();
}
