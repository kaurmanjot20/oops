/*  Write a program using Array of Objects to display area of multiple rectangles. */
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor to initialize length and width
    Rectangle(float l = 0, float w = 0) {
        length = l;
        width = w;
    }

    // Function to calculate and return the area of the rectangle
    float calculateArea() const {
        return length * width;
    }

    // Function to set the dimensions of the rectangle
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    // Function to display the area of the rectangle
    void displayArea() const {
        cout << "Rectangle with length " << length << " and width " << width
             << " has area: " << calculateArea() << endl;
    }
};

int main() {
    int numRectangles;

    // Ask user for the number of rectangles
    cout << "Enter the number of rectangles: ";
    cin >> numRectangles;

    // Create an array of Rectangle objects
    Rectangle rectangles[numRectangles];

    // Input dimensions for each rectangle
    for (int i = 0; i < numRectangles; i++) {
        float length, width;
        cout << "Enter length and width for rectangle " << i + 1 << ": ";
        cin >> length >> width;
        rectangles[i].setDimensions(length, width);
    }

    // Display area for each rectangle
    cout << "\nAreas of rectangles:" << endl;
    for (int i = 0; i < numRectangles; i++) {
        rectangles[i].displayArea();
    }

    return 0;
}
