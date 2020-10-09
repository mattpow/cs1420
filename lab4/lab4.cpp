// Matthew Powell
// lab2.cpp
// 9/30/2020
//
// Purpose: display a multiplication table as well as a half diamond shape
//
// Input: multiplication range and half diamond range for loops
//
// Processing: multiplication table: nested loop multiplies values to display
// multiplication grid. Half diamond: dynamically space width of whitespace
// on the left side of the output based on index of loop
//
// Output: multiplication table and half diamond number display

#include <iostream>
#include <iomanip>

using namespace std;
int main() 
{
	// upper range for multiplication table for loop
	int multiMax;
	
	// upper range for half diamond loop
	int diamondMax;

	cout << endl << "Welcome to Lab 4" << endl << endl;
	
	cout << "Input a number for the multiplication table: ";
	cin >> multiMax;
	
	for (int i = 0; i <= multiMax; i++) {
		cout << endl;
		for (int j = 0; j <= multiMax; j++) {
			cout  << setw(4) << i * j;
		}
	}
	
	cout << endl << endl << "Input a number for the half-diamond: ";
	cin >> diamondMax;
	
	for (int i = 0; i < diamondMax; i++) {
		cout << setw(i + 1) << i + 1 << endl;	
	}
	for (int i = diamondMax; i > 1; i--) {
		cout << setw(i - 1) << i - 1 << endl;	
	}

	return 0;	
}