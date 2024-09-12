#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void displayBase() {
        cout << "Base class display function" << endl;
    }
};

// Intermediate classes inheriting from Base using virtual inheritance
class Intermediate1 : virtual public Base {
public:
    void displayIntermediate1() {
        cout << "Intermediate1 class display function" << endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    void displayIntermediate2() {
        cout << "Intermediate2 class display function" << endl;
    }
};

// Derived class inheriting from Intermediate1 and Intermediate2
class Derived : public Intermediate1, public Intermediate2 {
public:
    void displayDerived() {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Derived obj;
    obj.displayBase();          // Inherited from Base
    obj.displayIntermediate1(); // Inherited from Intermediate1
    obj.displayIntermediate2(); // Inherited from Intermediate2
    obj.displayDerived();       // Defined in Derived
    return 0;
}
