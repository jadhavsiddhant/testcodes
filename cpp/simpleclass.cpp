#include <iostream>
using namespace std;
class Person{
            public:
            string name;
            int age;
            void introduce(){
                        cout << "HI my name is " << name << " and I am " << age << "  years old. "<< endl;
            
            }
};
int main() 
{
            Person person1;
            person1.name = "VIRshin";
            person1.age = 19;
            person1.introduce();
  return 0;
}