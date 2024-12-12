#include <iostream>
#include <string>
using namespace std;
template <class t>
void display(t x)
{
            cout << "template display: " << x << "\n";
}
void display(int x)
{
            cout << "Explicit display: " << x << "\n";
}
int main() 
{
            display(100);
            display(12.34);
            display('c');
  return 0;
}