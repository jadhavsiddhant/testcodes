// Write a recursive function int factorial(int n) that calculates the factorial of a
// given number n.
// In the main() function, prompt the user to enter a positive integer and call the
// factorial function to compute and display the result.
// Example: For input 5, the output should be 120.

#include <iostream>
using namespace std;
int factorial(int n){
            if (n<=1){
                        return 1;
            }
            return n*factorial(n-1);
}
int main() 
{
            int n;
            cout << "Enter the number you want to find factorial of: ";
            cin >> n;
            cout << "Factorial of number "<< n << "is "<<factorial(n);
  return 0;
}