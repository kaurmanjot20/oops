/*
Verify the following about destructor by writing the program:
(i) Name should begin with tilde sign(~) and must match class name.
(ii) There cannot be more than one destructor in a class.
(iii) Destructors do not allow any parameter.
(iv) They do not have any return type, just like constructors
*/
#include <iostream>
using namespace std;

class Test {
public:
    // Constructor
    Test() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Test() {
        cout << "Destructor called!" << endl;
    }

    // Uncommenting the following lines will produce errors:
    /*
    // Destructor with parameters (not allowed)
    ~Test(int x) {
        cout << "Destructor with parameter (not allowed)" << endl;
    }
    
    // Return type for destructor (not allowed)
    int ~Test() {
        cout << "Destructor with return type (not allowed)" << endl;
    }
    */

    // Normal function to check destructor uniqueness
    void display() {
        cout << "Display function called!" << endl;
    }
};

int main() {
    // Creating an object of class Test
    Test obj;

    obj.display();  // Call normal member function

    return 0;  // Destructor is called automatically when object goes out of scope
}
