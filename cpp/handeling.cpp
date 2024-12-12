#include <iostream>
using namespace std;
int main() 
{
            int num;
            cout << "Enter any number: ";
            cin >> num;
            try{
                        if(num>=0)
                        cout << "Valid number" << num << endl;
                        else
                        throw(num);
            }
            catch (int neg){
                        cout << "Only enter positive numbers " << neg << endl;
            }
  return 0;
}