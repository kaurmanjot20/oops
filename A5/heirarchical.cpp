#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived1 : public Base {
public:
    void show1() {
        cout << "Derived1 class show function" << endl;
    }
};

class Derived2 : public Base {
public:
    void show2() {
        cout << "Derived2 class show function" << endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    obj1.display();  // Inherited from Base
    obj1.show1();    // Defined in Derived1

    obj2.display();  // Inherited from Base
    obj2.show2();    // Defined in Derived2
    return 0;
}
