// Write a program to declare an array of size 10, initialize it with the first 10
// natural numbers, and print each element on a new line.

#include <iostream>
using namespace std;
int main() 
{
            int arr[10];
            cout << "Enter 10 elements in the array: ";
            for (int i=0; i<10; i++){
                        cin >> arr[i];
            }

            cout << "Entered array of number is: " << "\n";
            for (int i=0; i<10; i++){
                        cout << arr[i] << "\n";
            }

  return 0;
}