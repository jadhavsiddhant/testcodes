#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    int evenSum = 0;
    long oddProduct = 1;  

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            evenSum += i;
        } else { 
            oddProduct *= i; 
        }
    }
    cout << "Sum of even numbers between 1 and " << n << ": " << evenSum << endl;
    cout << "Product of odd numbers between 1 and " << n << ": " << oddProduct << endl;
    return 0;
}