/*
 Access Static Variables
 A static member variable is shared among all objects of the class. It is defined outside the class using the scope resolution operator.
*/
#include <iostream>
using namespace std;

// Define the class Counter
class Counter {
    private:
        static int count;  // Static member variable

    public:
        void increment() {
            count++;
        }

        void displayCount() {
            cout << "Count: " << count << endl;
        }
};

// Define static variable outside the class using scope resolution operator
int Counter::count = 0;

// Main function
int main() {
    Counter c1, c2;

    c1.increment();
    c1.displayCount();  // Count: 1

    c2.increment();
    c2.displayCount();  // Count: 2 (since count is shared between objects)

    return 0;
}
