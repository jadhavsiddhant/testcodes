#include <iostream>
using namespace std;
class bank{
            public:
            void withdraw(){
                        int balance=500;
                        int w;
                        cout << "Enter the amount you want to withdraw: ";
                        cin >> w;
                        if (w>balance){
                                    cout << "Insufficient balance" << endl;
                        }
                        else
                        cout << "Remaining amount Rs " << balance-w << endl;
            }
};
int main() 
{
            bank mybank;
            mybank.withdraw();
  return 0;
}