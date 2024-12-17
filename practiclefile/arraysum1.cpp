Write a program to take 6 integers as input, store them in an array, and
calculate the sum of all elements in the array.

#include <iostream>
using namespace std;
int main() 
{
            int sum=0;
            int arr[6];
            cout << "Enter 6 elements: ";
            for(int i=0; i<6; i++){
                        cin>>arr[i];
            }

            for(int i=0; i<6; i++){
                        sum +=arr[i];
            }
            cout << "Sum of all elements of the array is: " << sum << endl;
  return 0;
}