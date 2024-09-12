/* Write a program to swap private values of two classes using a friend function.*/
#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int valueA;

public:
    void setValue(int a) {
        valueA = a;
    }

    void display() const {
        cout << "ClassA value: " << valueA << endl;
    }

    // Friend function declaration
    friend void swapValues(ClassA &a, ClassB &b);
};

class ClassB {
private:
    int valueB;

public:
    void setValue(int b) {
        valueB = b;
    }

    void display() const {
        cout << "ClassB value: " << valueB << endl;
    }

    // Friend function declaration
    friend void swapValues(ClassA &a, ClassB &b);
};

// Friend function definition
void swapValues(ClassA &a, ClassB &b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    ClassA objA;
    ClassB objB;

    objA.setValue(5);
    objB.setValue(10);

    cout << "Before swapping:" << endl;
    objA.display();
    objB.display();

    swapValues(objA, objB);

    cout << "\nAfter swapping:" << endl;
    objA.display();
    objB.display();

    return 0;
}