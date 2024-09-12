/* Write a program to implement (a) pointer to an object (b) this pointer. Practice
both ‘.’ (dot operator) and ‘->’ (arrow operator). */
#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    // Function to calculate area using 'this' pointer
    double calculateArea() const {
        return this->length * this->width;
    }
    // Function to display dimensions using both 'this' and object pointer
    void displayDimensions() const {
        cout << "Length: " << this->length << ", Width: " << this->width << endl;
    }
};

int main() {
    // Create a Rectangle object using direct access
    Rectangle rect1(5.0, 3.0);

    // Display dimensions using the dot operator
    cout << "Using dot operator (rect1.displayDimensions()):" << endl;
    rect1.displayDimensions();
    cout << "Area of rect1 (using dot operator): " << rect1.calculateArea() << endl;

    // Create a pointer to the Rectangle object
    Rectangle *rectPtr = &rect1;

    // Access members using the arrow operator
    cout << "\nUsing arrow operator (rectPtr->displayDimensions()):" << endl;
    rectPtr->displayDimensions();
    cout << "Area of rect1 (using arrow operator): " << rectPtr->calculateArea() << endl;

    return 0;
}
