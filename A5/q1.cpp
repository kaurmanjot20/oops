#include <iostream>
using namespace std;

// Base class
class Human {
public:
    // Base class method
    void speak() {
        cout << "Human speaks!";
    }
};

// Derived class inheriting from Human
class Boy : public Human {
public:
    // Derived class method
    /* void speak() {
        cout << "Boy says hello!" << endl;
    } */
};

int main() {
    // Creating an object of the base class Human
    Human human;
    human.speak();  // Calls the base class method

    // Creating an object of the derived class Boy
    Boy boy;
    boy.speak();  // Calls the derived class method

    // Base class functionality is also available in the derived class
    // boy.Human::speak();  // Calls the base class method using derived class object

    return 0;
}
