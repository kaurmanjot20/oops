//Class Functions Defined Outside the Class
#include <iostream>

using namespace std;

// Define the class Rectangle
class Rectangle {
    private:
        int width;
        int height;

    public:
        // Function prototypes
        void setDimensions(int w, int h);
        int calculateArea();
};

// Function definitions using scope resolution operator
void Rectangle::setDimensions(int w, int h) {
    width = w;
    height = h;
}

int Rectangle::calculateArea() {
    return width * height;
}

// Main function
int main() {
    Rectangle rect;
    rect.setDimensions(5, 10);
    cout << "Area of the rectangle: " << rect.calculateArea() << endl;

    return 0;
}
