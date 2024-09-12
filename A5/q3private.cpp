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
class Derived : private Base {
public:
    void display() {
        publicVar = 10;        // Accessible (private in Derived)
        protectedVar = 20;     // Accessible (private in Derived)
        cout << "Public Var (private now): " << publicVar << endl;
        cout << "Protected Var (private now): " << protectedVar << endl;
    }
};

int main() {
    Derived d;
    // d.publicVar = 100;    // Not accessible (private in Derived)
    d.display();
    return 0;
}
