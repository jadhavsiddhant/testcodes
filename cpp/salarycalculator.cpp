#include <iostream>
using namespace std;

int main() 
{
    int bsalary, hra, da, gsalary;
    
    cout << "Enter your basic salary: ";
    cin >> bsalary;
    
    cout << "Enter your HRA %: ";
    cin >> hra;
    
    cout << "Enter your DA %: ";
    cin >> da;
    
    int x = (hra * bsalary) / 100;  // Changed order to avoid integer truncation
    int y = (da * bsalary) / 100;
    gsalary = x + y + bsalary;
    
    cout << "Gross salary of employee is Rs: " << gsalary;
    
    return 0;
}
