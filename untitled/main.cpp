#include <iostream>

using namespace std;


int main()
{
  int numVar = 9;
  int* numPtr;
  numPtr = &numVar;

  cout << numPtr << endl;
  cout << *numPtr << endl << endl;
  cout << &numVar << endl;
  cout << numVar << endl;
  return 0;

}