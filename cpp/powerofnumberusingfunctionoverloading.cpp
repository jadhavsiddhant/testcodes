#include <iostream>
#include <cmath>
using namespace std;
int power(int base, int exp){
            return pow(base, exp);
}
double power(double base,double exp){
            return pow(base, exp);
}
int main() 
{
            cout << "2 to power 3 = " << power(2,3) << endl;
            cout << "2.5 to power 3.5 = " << power(2.5,3.5) << endl;
  return 0;
}