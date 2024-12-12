#include <iostream>
using namespace std;
int factorial(int n) {
    if (n < 0) {
        throw "Factorial is not defined for negative numbers!";
    }
    if (n == 0) {
        return 1; 
    }

    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    cout << "Enter a number to calculate its factorial: ";
    cin >> number;

    try {
        int fact = factorial(number);
        cout << "The factorial of " << number << " is: " << fact << endl;
    }
    catch (const char* errorMsg) {
        cout << "Error: " << errorMsg << endl;
    }

    return 0;
}