// Write a program that defines a function int add(int a, int b)
//  to calculate and return the sum of two integers. 
// ● Call this function from main() with two user-input values. 
// ● Display the returned result. 

#include <iostream>
using namespace std;
int add(int a, int b){
            return a + b;
}
int main() 
{
            int a , b;
            cout << "Enter the value of 2 integers: ";
            cin >> a >> b;
            cout << "Addition of two numbers is: " << add(a , b);

  return 0;
}