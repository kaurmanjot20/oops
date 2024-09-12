/*
Public members of the base class remain public in the derived class.
Protected members of the base class remain protected in the derived class.
Private members of the base class remain inaccessible in the derived class (can only be accessed via public/protected methods of the base class).
*/
#include <iostream>
using namespace std;

class Base {
public:
    int publicVar;
protected:
    int protectedVar;
private:
    int privateVar;  // Inaccessible in derived classes
};

class Derived : public Base {
public:
    void display() {
        publicVar = 10;        // Accessible (public in Derived)
        protectedVar = 20;     // Accessible (protected in Derived)
        // privateVar = 30;    // Not accessible (private in Base)
        cout << "Public Var: " << publicVar << endl;
        cout << "Protected Var: " << protectedVar << endl;
    }
};

int main() {
    Derived d;
    d.publicVar = 100;  // Accessible (public in Derived)
    // d.protectedVar = 200; // Not accessible (protected in Derived)
    d.display();
    return 0;
}
/*
Public Inheritance: Keeps the same access level for members. This is the most common form of inheritance.
Protected Inheritance: Limits the visibility of public members from outside the class hierarchy, making them protected.
Private Inheritance: Restricts all inherited members (both public and protected) to be private within the derived class.
*/