#include <iostream>
using namespace std;
class Vehicle{
            public:
            Vehicle(){
                        cout << "This is vehicle" << endl;
            }
};
class car : public Vehicle{
            //car class inherits the constructor of vehicle
};
int main() 
{
            car obj; // this will call the vehicle constructor
  return 0;
}