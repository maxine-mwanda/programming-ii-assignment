#include <iostream>
using namespace std;

int main() {

  int a, b;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> b;

  // 0 and 1 are not prime numbers
  if (b == 0 || b == 1) {
    is_prime = false;
  }

  // loop to check if n is prime
  for (a = 2; a <= b/2; ++a) {
    if (b % a == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << b << endl << " is a prime number";
  else
    cout << b << endl<< " is not a prime number";

   return 0;
} 