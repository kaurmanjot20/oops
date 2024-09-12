/*  Write a program to define function cube() as inline for calculating cube of a number.*/
#include <iostream>
using namespace std;

// Define inline function to calculate the cube of a number
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int number;

    // Ask user for input
    cout << "Enter a number: ";
    cin >> number;

    // Calculate and display the cube of the number
    cout << "The cube of " << number << " is: " << cube(number) << endl;

    return 0;
}
