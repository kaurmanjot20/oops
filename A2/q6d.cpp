// Use of Inbuilt Libraries (cin and cout) with Scope Resolution Operator
#include <iostream>

int main() {
    int num;

    // Using scope resolution operator with std:: namespace
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;

    return 0;
}
