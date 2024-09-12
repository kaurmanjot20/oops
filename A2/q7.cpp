// Create a code to implement the namespace and use similar variables and functions defined in different code sections
#include <iostream>

// Define namespace A
namespace A {
    int number = 10;  // Variable in namespace A

    void display() {  // Function in namespace A
        std::cout << "Namespace A, Number: " << number << std::endl;
    }
}

// Define namespace B
namespace B {
    int number = 20;  // Variable in namespace B

    void display() {  // Function in namespace B
        std::cout << "Namespace B, Number: " << number << std::endl;
    }
}

int main() {
    // Access variable and function from namespace A
    std::cout << "Accessing from Namespace A:" << std::endl;
    A::display();

    // Access variable and function from namespace B
    std::cout << "Accessing from Namespace B:" << std::endl;
    B::display();

    // Using fully qualified names to avoid ambiguity
    std::cout << "************************************************************"  << std::endl;
    std::cout << "Namespace A number: " << A::number << std::endl;
    std::cout << "Namespace B number: " << B::number << std::endl;
    std::cout << "************************************************************"  << std::endl;

    return 0;
}
