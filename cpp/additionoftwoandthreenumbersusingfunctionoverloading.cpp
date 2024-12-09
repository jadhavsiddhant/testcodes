#include <iostream>
using namespace std;

class Calculator {
    public:
        int add(int a, int b) {
            return a + b;
        }
        int add(int a, int b, int c) {
            return a + b + c;
        }
};

int main() {
    Calculator calc;
    
   
    int sum1 = calc.add(10, 20);
    cout << "Sum of two numbers: " << sum1 << endl;

    int sum2 = calc.add(10, 20, 30);
    cout << "Sum of three numbers: " << sum2 << endl;

    return 0;
}