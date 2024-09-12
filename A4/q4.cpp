/*
Implement dynamic memory allocation. Use new and delete keywords.
(For integer variable, float variable, integer array, float array, class objects, Array of
Objects)
*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;

public:
    // Constructor with default arguments
    Rectangle(int l = 1, int b = 1) {
        length = l;
        breadth = b;
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
    // Dynamic allocation for an integer variable
    int* intVar = new int;
    *intVar = 10;
    cout << "Integer value: " << *intVar << endl;

    // Dynamic allocation for a float variable
    float* floatVar = new float;
    *floatVar = 15.5;
    cout << "Float value: " << *floatVar << endl;

    // Dynamic allocation for an integer array
    int* intArray = new int[3];
    intArray[0] = 1;
    intArray[1] = 2;
    intArray[2] = 3;
    cout << "Integer array values: " << intArray[0] << ", " << intArray[1] << ", " << intArray[2] << endl;

    // Dynamic allocation for a float array
    float* floatArray = new float[3];
    floatArray[0] = 1.1f;
    floatArray[1] = 2.2f;
    floatArray[2] = 3.3f;
    cout << "Float array values: " << floatArray[0] << ", " << floatArray[1] << ", " << floatArray[2] << endl;

    // Dynamic allocation for a single object of class Rectangle
    Rectangle* rect = new Rectangle(4, 5);
    cout << "Area of dynamically allocated rectangle: " << rect->area() << endl;

    // Dynamic allocation for an array of objects of class Rectangle
    Rectangle* rectArray = new Rectangle[2]{{6, 7}, {8, 9}};
    for (int i = 0; i < 2; ++i) {
        cout << "Area of Rectangle " << i + 1 << ": " << rectArray[i].area() << endl;
    }

    // Free the dynamically allocated memory using delete and delete[]
    delete intVar;            // Delete integer variable
    delete floatVar;          // Delete float variable
    delete[] intArray;        // Delete integer array
    delete[] floatArray;      // Delete float array
    delete rect;              // Delete single Rectangle object
    delete[] rectArray;       // Delete array of Rectangle objects

    return 0;
}



/*
float x = 1.1;   // 1.1 is treated as a double, and then implicitly converted to float.
float y = 1.1f;  // 1.1f is treated as a float, no conversion needed.
*/