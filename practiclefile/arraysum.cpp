#include <iostream>
using namespace std;
int main() {
    const int SIZE = 6; 
    int numbers[SIZE];  
    int sum = 0;       
    cout << "Enter 6 integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i]; 
    }
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    cout << "The sum of all elements is: " << sum << endl;

    return 0;
}