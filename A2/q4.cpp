/*
Define a class Rectangle with variables width and height of integer typwe along with
following:
(a) void getdata() to initialize object values
(b) void calculatearea() to calculate and display the area
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;

public:
    // Method to initialize object values
    void getdata() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    // Method to calculate and display the area
    void calculatearea() {
        int area = width * height;
        cout << "The area of the rectangle is: " << area << endl;
    }
};

int main() {
    Rectangle rect;
    rect.getdata();       // Initialize object values
    rect.calculatearea(); // Calculate and display the area
    return 0;
}