#include <iostream>
using namespace std;

class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Another base class
class My3rdClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class." ;
    }
};


class My2ndClass: public MyClass, public My3rdClass {
};

int main() {
  My2ndClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}