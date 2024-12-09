#include <iostream>
using namespace std;
int area(int r){
            return (3.14*r*r);
}
int area(int l, int b){
            return (l*b);
}
int main() 
{
            cout << "area of circle is: " << area(7) << endl;
            cout << "area of rectangle is: " << area(10,10) << endl;
  return 0;
}