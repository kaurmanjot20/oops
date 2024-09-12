/*  Write a program to pass an object as an argument and return the object from a
function.
a. Use pass-by-value
b. Use pass-by-address*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor to initialize length and width without initializer list
    Rectangle(float l = 0, float w = 0) {
        length = l;
        width = w;
    }

    // Function to calculate and return the area of the rectangle
    float area() const {
        return length * width;
    }

    // Function to display rectangle information
    void display() const {
        cout << "Length: " << length << ", Width: " << width
             << ", Area: " << area() << endl;
    }

    // Setter for dimensions
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    // Getters for length and width
    float getLength() const { return length; }
    float getWidth() const { return width; }
};

// Function to modify the rectangle using pass-by-value
Rectangle modifyByValue(Rectangle rect) {
    rect.setDimensions(rect.getLength() + 1, rect.getWidth() + 1);
    return rect;  // Return modified object
}

// Function to modify the rectangle using pass-by-address
void modifyByAddress(Rectangle* rectPtr) {
    rectPtr->setDimensions(rectPtr->getLength() + 1, rectPtr->getWidth() + 1);
}

int main() {
    // Create a Rectangle object
    Rectangle rect1(5, 3);

    cout << "Original Rectangle:" << endl;
    rect1.display();

    // Pass-by-value
    Rectangle newRect = modifyByValue(rect1);
    cout << "\nRectangle after pass-by-value modification:" << endl;
    newRect.display();  // Shows the modified object

    // Pass-by-address
    modifyByAddress(&rect1);
    cout << "\nRectangle after pass-by-address modification:" << endl;
    rect1.display();  // Shows the modified object

    return 0;
}
