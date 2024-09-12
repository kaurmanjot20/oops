#include <iostream>
using namespace std;

class Grandparent {
public:
    void displayGrandparent() {
        cout << "Grandparent class display function" << endl;
    }
};

class Parent : public Grandparent {
public:
    void displayParent() {
        cout << "Parent class display function" << endl;
    }
};

class Child : public Parent {
public:
    void displayChild() {
        cout << "Child class display function" << endl;
    }
};

int main() {
    Child obj;
    obj.displayGrandparent();  // Inherited from Grandparent
    obj.displayParent();       // Inherited from Parent
    obj.displayChild();        // Defined in Child
    return 0;
}
