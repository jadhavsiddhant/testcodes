#include <iostream>
using namespace std;
class poly{
            public:
            void func(int x)
            {
                        cout << "Value of x is " << x << endl;
            }
            void func(double x)
            {
                        cout << "Value of x is " << x << endl;
            }
            void func(int x , int y)
            {
                        cout << "Value of x and y is " << x << ',' << y << endl;
            }
};
int main() 
{
            poly obj1;
            obj1.func(7);
            obj1.func(9.132);
            obj1.func(85, 64);
  return 0;
}