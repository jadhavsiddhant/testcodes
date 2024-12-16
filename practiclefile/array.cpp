// Write a C++ program to input 5 integers from the user into an array and find
// the largest number in the array
#include <iostream>
using namespace std;
int main() 
{
            int n;
            cout << "Enter the size of array" ;
            cin >> n;

            int arr[n];
            cout << "Enter " << n <<" elements" << endl;
            for (int i=0; i<n; i++){
                        cin >> arr[i];
            }
            int max = arr[0];
            for (int i = 1; i<n; i++){
                        if (arr[i]>max){
                                    max = arr[i];
                        }
            }
            cout << "Largest number is " << max << endl;

  return 0;
}