/*
Redefine the above program by creating an array of objects of the class Rectangle and
calculate area for each object calling different constructors. Also implement
constructors with default arguments and destructor in this program.
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Rectangle created with length = " << length << " and breadth = " << breadth << endl;
    }

    // Constructor with two parameters, initializes length and breadth
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Rectangle created with length = " << length << " and breadth = " << breadth << endl;
    }

    // Constructor with one parameter, initializes both length and breadth to the same value
    Rectangle(int side) {
        length = side;
        breadth = side;
        cout << "Rectangle created with length = " << length << " and breadth = " << breadth << endl;
    }
    // Destructor
    ~Rectangle() {
        cout << "Rectangle with length = " << length << " and breadth = " << breadth << " is destroyed." << endl;
    }

    // Function to calculate area
    int area() {
        return length * breadth;
    }
};

int main() {
    // Creating an array of Rectangle objects
    Rectangle rectArray[3] = {
        Rectangle(),         // No parameters (default constructor)
        Rectangle(5),        // One parameter (length = breadth = 5)
        Rectangle(4, 6)      // Two parameters (length = 4, breadth = 6)
    };

    // Printing the area for each object in the array
    for (int i = 0; i < 3; ++i) {
        cout << "Area of Rectangle " << i + 1 << ": " << rectArray[i].area() << endl;
    }

    return 0;
}
