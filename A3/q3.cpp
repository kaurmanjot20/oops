/* Write a program to add data objects of two different classes using friend
functions.*/
#include <iostream>
using namespace std;

class ClassB;  // Forward declaration of ClassB

class ClassA {
private:
    int valueA;

public:
    // Constructor to initialize valueA
    ClassA(int val) {
        valueA = val;
    }

    // Friend function declaration to add values from ClassA and ClassB
    friend int addValues(ClassA& a, ClassB& b);
};

class ClassB {
private:
    int valueB;

public:
    // Constructor to initialize valueB
    ClassB(int val) {
        valueB = val;
    }

    // Friend function declaration to add values from ClassA and ClassB
    friend int addValues(ClassA& a, ClassB& b);
};

// Friend function definition to add values from ClassA and ClassB
int addValues(ClassA &a, ClassB &b) {
    return a.valueA + b.valueB;
}

int main() {
    // Create objects of ClassA and ClassB
    ClassA objA(5);
    ClassB objB(10);

    // Add the values of objA and objB using the friend function
    int result = addValues(objA, objB);

    // Display the result
    cout << "The sum of values from ClassA and ClassB: " << result << endl;

    return 0;
}
