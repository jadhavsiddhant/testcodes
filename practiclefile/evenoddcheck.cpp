// Write a program to input 8 numbers into an array and count how many of
// them are even and how many are odd.

#include <iostream>
using namespace std;
int main() 
{
            int arr[8];
            cout << "Enter 8 element in the array: ";
            for(int i=0; i<8; i++){
                        cin >> arr[i];
            }
            int odd=0 ;
            int even=0 ;
            for(int i=0; i<8; i++){
                        if(arr[i]%2==0){
                                    even+=1;
                        }
                        else
                        odd+=1;
            }
            cout << "Odd numbers in array: " << odd << endl;
            cout << "Even numbers in array: " << even << endl;

  return 0;
}