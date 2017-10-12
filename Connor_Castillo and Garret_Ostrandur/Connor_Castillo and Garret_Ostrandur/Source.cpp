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

		int ones_digit = (var_number/100)% 10;
		int tens_digit = (var_number/10)%10;
		int hundreds_digit = var_number%10;
		
		if (var_number < 1000) {

		}
		else {
			cout << "Invalid Number";
			cout << "\n";
		}
	
		if (hundreds_digit > tens_digit) {
			if (tens_digit > ones_digit) {
				cout << "The number " << var_number <<" is ascending.";
				cout << "\n";
			}
		}
			else if (ones_digit > tens_digit) {
				if (tens_digit > hundreds_digit)
					cout << "The Number " << var_number <<" is descending";
				cout << "\n";
			}

			else {
				cout << "The number "<< var_number << " is neither.";
				cout << "\n";
			}


		;pause();
}
