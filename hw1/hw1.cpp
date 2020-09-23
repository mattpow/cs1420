// Author: Matthew Powell
// File: hw1.cpp
// Date: September 22, 2020
// Purpose: To generate a MadLib using user generated content
//
// Input: name, job, spouseName, animalType, place, year, and children
//
// Processing: stores input in variables. Outputs variables in concatenated
// print statement using cout
//
// Output: a MabLib containing the provided inputs

#include <iostream>
#include <string>

using namespace std;

int main() {
  string name;
  string job;
  string spouseName;
  string animalType;
  string place;
  int year;
  int children;

  cout << endl << "Welcome to Matt's MadLibs" << endl;
  cout << "I will ask you to answer a number of prompts" << endl;
  cout << "that will output a personalized MadLib" << endl << endl;

  cout << "Choose a name: ";
  cin >> name;

  cout << endl << "Choose a profession: ";
  cin >> job;

  cout << endl << "Choose another name: ";
  cin >> spouseName;

  cout << endl << "Name a type of animal: ";
  cin >> animalType;

  cout << endl << "Name a place: ";
  cin >> place;

  cout << endl << "Choose a year: ";
  cin >> year;

  cout << endl << "Choose a number: ";
  cin >> children;

  cout  << endl << endl;
  cout << "In the year " << year << " there was a person named " << name
  << ". " << endl << name << " was a " << job << " and they were the best "
  << "at their job." << endl << "With a spouse named " << spouseName
  << ", a pet " << animalType << " and " << children
  << " children, " << endl << name << " was happy at the life they had built."
  << endl << "However it all changed when they moved to " << place << ".";

  cout << endl << endl << "Thank you for using Matt's MadLibs!" << endl;

  return 0;
}
