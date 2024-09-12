/*  WAP to swap two numbers using bitwise operator. */
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input two numbers
    cout << "Enter first number (a): ";
    cin >> a;
    cout << "Enter second number (b): ";
    cin >> b;

    // Display the numbers before swapping
    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Swap the numbers using bitwise XOR operator
    a = a ^ b;  // Step 1: a now contains a ^ b
    b = a ^ b;  // Step 2: b now contains (a ^ b) ^ b = a
    a = a ^ b;  // Step 3: a now contains (a ^ b) ^ a = b

    // Display the numbers after swapping
    cout << "After swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
