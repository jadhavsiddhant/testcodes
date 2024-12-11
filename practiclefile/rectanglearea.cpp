#include <iostream>

class Rectangle {
private:
    // Private data members
    int l; // length
    int b; // breadth

public:
    // Default constructor
    Rectangle() : l(1), b(1) {}

    // Member function to calculate area
    int area() {
        return l * b;
    }

    // Member function to set dimensions
    void setDimensions(int length, int breadth) {
        l = length;
        b = breadth;
    }

    // Optional: Member function to display dimensions
    void displayDimensions() {
        std::cout << "Length: " << l << ", Breadth: " << b << std::endl;
    }
};

int main() {
    Rectangle rect; // Create a Rectangle object

    // Input length and breadth from the user
    int length, breadth;
    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter breadth of the rectangle: ";
    std::cin >> breadth;

    // Set the dimensions of the rectangle
    rect.setDimensions(length, breadth);

    // Display dimensions and area
    rect.displayDimensions();
    std::cout << "Area of rectangle: " << rect.area() << std::endl; // Output area

    return 0;
}