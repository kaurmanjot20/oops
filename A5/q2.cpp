#include <iostream>
using namespace std;

// Base class
class Animal {
protected:
    int age;  // Protected member
public:
    void setAge(int a) {
        age = a;
    }
};

// Derived class
class Dog : public Animal {
public:
    void displayAge() {
        cout << "Dog's age is: " << age << " years" << endl;
    }
};

int main() {
    Dog dog;
    dog.setAge(5);  // Setting age using the base class function
    dog.displayAge();  // Accessing the protected member in the derived class

    return 0;
}