// Write a program that defines a class Rectangle with the following:
// Two private data members: length and width.
// A default constructor that initializes length and width to 1.
// A member function area() to calculate and return the area of the rectangle.
// A main() function to create an object of the Rectangle class, call the area()
// function, and print the result.

#include <iostream>
using namespace std;
class Rectangle //idhr class banaya rectangle bol k
{
private: //public datamemeber he ya private he vo set kiya
int length , width;

public:
Rectangle():length(1),width(1){} //idhr default constructor dala 

void setdimensions(double l , double w){
            length = l;
            width = w;
}

double area(){
            return length*width;
}
};


int main(){
            Rectangle obj;
            double length , width;
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            obj.setdimensions(length, width);
            cout << "Area of rectangle is: " << obj.area() << endl;

return 0;
}