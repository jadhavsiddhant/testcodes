// Write a C++ program to define a class Student with the following: Private data members
// : name and age. 
// A parameterized constructor to initialize the name and age. 
// A copy constructor to create a copy of an existing Student object. 
// A member function display() to print the details of the student. 
// In the main() function, create an object of the Student class using the parameterized constructor 
// and another object using the copy constructor. Display the details of both students. 

#include <iostream>
using namespace std;
class student{
            private:
            string name;
            int age;
public:
student(string n, int a):name(n),age(a){}

student(const student &s){
            name = s.name;
            age = s.age;
}
void display(){
cout << "Name: " << name << " Age: " << age << endl;
}
};
int main(){
            student student1("Pranav", 19);
            student student2 = student1;
            student1.display();
            student2.display();
}