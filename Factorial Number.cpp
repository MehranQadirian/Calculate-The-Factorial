#include <iostream>
#include <conio.h>

using namespace std;

unsigned int factorial(unsigned int n) {
  if (n == 0) // Base case
    return 1;
  return n * factorial(n - 1); // Recursive call
}

int main() {
  int num;
  while(true)
  {
  	cout << "Enter a number to show factorial : ";
  	cin >> num;
  	if(num != 0)
  		cout << "Factorial of " << num << " is " << factorial(num) << endl;
  	else
  		break;
  }
  cout << "Exit";
  return 0;
}

