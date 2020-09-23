// Matthew Powell
// lab1.cpp
// 9/19/2020

// Purpose: Ask user for name, favorite color, and an email; then print
// the result.
// Input: name, favorite color, and email
// Processing: store inputs to be outputted later
// Output: name, favorite color, and email

#include <iostream>
#include <string>

int main() {
  using namespace std;

  string name;
  string color;
  string email;

  cout << "Welcome to Lab 1" << endl << endl;
  cout << "What is your name? ";
  getline(cin, name);
  cout << endl << "What is your favorite color? ";
  getline(cin, color);
  cout << endl << "What is your email? ";
  getline(cin, email);
  cout << endl;

  cout << "Name: " << name << endl;
  cout << "Favorite Color: " << color << endl;
  cout << "Email: " << email << endl;

  return 0;
}
