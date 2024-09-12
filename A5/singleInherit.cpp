#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();  // Inherited from Base
    obj.show();     // Defined in Derived
    return 0;
}
