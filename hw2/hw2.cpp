// Matthew Powell
// lab2.cpp
// 10/4/2020
//
// Purpose: Create an integer guessing game where user will select a range
// and then try to find a randomly selected value within that range
//
// Input: minimum and maximum value, and a number to guess
//
// Processing: determine if user guessed value is equal to the randomly 
// selected winning value
//
// Output: provide help to user if value is too high or too low until user
// guesses the correct number

#include <iostream>

using namespace std;

int main()
{
	// minimum and maximum values to create a range
	int min, max;
	
	// randomly selected winning value for user to guess
	int winningValue;
	
	// number guessed by the user
	int selectedValue;
	
	// boolean value to restart the game after user wins
	bool playAgain = true;
	
	// user response from prompt to play again
	char response;
		
	while (playAgain) {
		
		// Welcome message
		cout << endl << endl << "Welcome to the Integer Guessing Game!" << endl 
				<< "I will ask you to put in a minimum and maximum number to " << endl
				<< "create a range. I will then select a number in that range " << endl
				<< "that you have to guess. Let's play" << endl << endl;
				
		cout << "Select a minimum number: ";
		cin >> min;
	
	  // If maximum value is less than the minimum value, prompt user to select
	  // a different value
		do {
			cout << endl << endl << "Select a maximum number: ";
			cin >> max; 
			
			if (max <= min) {
				cout << "Your maximum must be greater than your minimum value.";
			}	
		} 
		while (max <= min);
		
		// Generate a winning value
		winningValue = rand() % (max - min + 1) + min;
		
		cout << endl << "I've selected a number. Let's begin..." << endl;
		
		// When user selects number, provide tips if number is too high or low
		while (selectedValue != winningValue) {
			cout << endl << "Select a number between " 
			   << min << " and " << max << ": ";
			cin >> selectedValue;
			
			if (selectedValue < min || selectedValue > max) {
				cout << endl << "Your number is outside of the range." << endl;
			} else if (selectedValue < winningValue) {
				cout << endl << "Your number is too low. Try again." << endl;
			} else if (selectedValue > winningValue) {
				cout << endl << "Your number is too high. Try again." << endl;
			}
		}
		
		cout << endl
		   <<  "You found the number! Would you like to play again? (y/n) ";
		cin >> response;	
		
		if (response == 'n') {
			playAgain = false;
		}
		
	}
	
	cout << endl << "Thank you for playing the Integer Guessing Game,"
			 << endl << "Goodbye!" << endl;
	
	return 0;
}