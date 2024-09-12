/*
Create a class named 'Rectangle' with two data members- length and breadth and a
function to calculate the area which is 'length*breadth'. The class has three
constructors which are :
(a) having no parameter - values of both length and breadth are assigned zero.
(b) having two numbers as parameters - the two numbers are assigned as length and
breadth respectively.
(c) having one number as parameter - both length and breadth are assigned that
number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and
print their areas.
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor with no parameters, initializes length and breadth to 0
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // Constructor with two parameters, initializes length and breadth
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Constructor with one parameter, initializes both length and breadth to the same value
    Rectangle(int side) {
        length = side;
        breadth = side;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }
};

int main() {
    // Creating objects using different constructors
    Rectangle rect1;            // No parameters
    Rectangle rect2(5);         // One parameter
    Rectangle rect3(4, 6);      // Two parameters

    // Printing the areas of the rectangles
    cout << "Area of rect1 (no parameters): " << rect1.area() << endl;
    cout << "Area of rect2 (one parameter): " << rect2.area() << endl;
    cout << "Area of rect3 (two parameters): " << rect3.area() << endl;

    return 0;
}
