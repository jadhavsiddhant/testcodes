// Write a program to demonstrate function overloading by creating three 
// functions named max: 
// int max(int a, int b) to find the larger of two integers. 
// double max(double a, double b) to find the larger of two double values.

#include <iostream>
using namespace std;

int max(int a, int b){
            if (a > b){
                        return a;
            }
            else{
                        return b;
            }
}
double max(double a, double b){
            if (a > b){
                         return a;
            }
            else{
                        return b;
            }
}
int main() 
{
            cout << "Max of 3 and 6 is "<< max(3,6) << endl;
            cout << "Max of 2.50 and 5.50 is "<<max(2.50, 5.50) << endl;
  return 0;
}