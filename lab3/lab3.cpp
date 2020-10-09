// Matthew Powell
// lab2.cpp
// 9/30/2020
//
// Purpose: Request two integer values from the user and determine 
// if the first value is a multiple of the second value.
//
// Input: integer value 1, integer value 2
//
// Processing: determine if value 1 is a multiple of value 2. If so,
// find the factor.
//
// Output: yes message with value 1, value 2, and factor; or no message
// with value 1 and value 2.

#include <iostream>

using namespace std;

int main() {
  // integer values that user will input
  int value1, value2;
  
  // determines whether game will repeat after the program has finished
  bool playAgain = true;
  
  // single character response from user to determine if playAgain
  // should become false.
  char response;
  
  cout << "Welcome to Lab 3." << endl;
  
  while(playAgain) {
    cout << endl << "Input two integers: ";
    cin >> value1 >> value2;
    
    if (value1 % value2 == 0) {
      int factor = value1 / value2;
      cout << endl << "Yes, " << value1 << " is a multiple of " << value2 
           << ", and the other factor is " << factor << "." << endl;
    } else {
      cout << endl << "No, " << value1 << " is not a multiple of " 
           << value2 << "." << endl;
    }
    
    cout << endl << "Do you want to continue (y/n): ";
    cin >> response;
    
    if (response == 'n') {
      playAgain = false;
    }
  }
  
  cout << endl << "Thank you for playing. Goodbye.";
  
  return 0;
}