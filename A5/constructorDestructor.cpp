#include <iostream>
using namespace std;

// Base class
class Father {
public:
    // Base class constructor
    Father() {
        cout << "Father's constructor called" << endl;
    }

    // Base class destructor
    ~Father() {
        cout << "Father's destructor called" << endl;
    }
};

// Derived class
class Child : public Father {
public:
    // Derived class constructor
    Child() {
        cout << "Child's constructor called" << endl;
    }

    // Derived class destructor
    ~Child() {
        cout << "Child's destructor called" << endl;
    }
};

int main() {
    cout << "Creating Child object..." << endl;
    Child obj;  // Child object creation (constructor will be called)
    cout << "Child object created." << endl;
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}
