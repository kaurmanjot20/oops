#include <iostream>
using namespace std;

// Base class Father
class Father {
public:
    void displayFather() {
        cout << "Father's display function" << endl;
    }
};

// Base class Mother
class Mother {
public:
    void displayMother() {
        cout << "Mother's display function" << endl;
    }
};

// Child class inheriting from both Father and Mother using virtual inheritance
class Child : public virtual Father, public virtual Mother {
public:
    void displayChild() {
        cout << "Child's display function" << endl;
    }
};

int main() {
    Child obj;
    obj.displayFather();  // Inherited from Father
    obj.displayMother();  // Inherited from Mother
    obj.displayChild();   // Defined in Child
    return 0;
}
