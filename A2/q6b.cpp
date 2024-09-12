/*
Access a Global Variable with the Same Name as a Local Variable
*/
#include <iostream>

using namespace std;

int number = 100;  // Global variable

void displayNumber() {
    int number = 50;  // Local variable
    cout << "Local number: " << number << endl;
    cout << "Global number: " << ::number << endl;  // Access global variable using :: scope resolution operator
}

// Main function
int main() {
    displayNumber();
    
    return 0;

}
