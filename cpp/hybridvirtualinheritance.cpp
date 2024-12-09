#include <iostream>
using namespace std;

class Vehicle {
    public:
        Vehicle() {
            cout << "This is a Vehicle" << endl;
        }
};

class FourWheeler : public Vehicle {
    public:
        FourWheeler() {
            cout << "This is a Four Wheeler" << endl;
        }
};

class Electric {
    public:
        Electric() {
            cout << "This is an Electric Vehicle" << endl;
        }
};

class ElectricCar : public FourWheeler, public Electric {
    public:
        ElectricCar() {
            cout << "This is an Electric Car" << endl;
        }
};

int main() {
    return 0;
}