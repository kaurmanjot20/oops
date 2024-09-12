/*
Define a class Complex with variables real and imaginary along with following:
(a)void setComplex (float, float) to initialize object values.
(b) void displayComplex() to show the complex number
(c)Pass and return objects to calculate sum of two complex numbers. Display the
sum.
*/
#include <iostream>

using namespace std;

// Define the class Complex
class Complex {
    // Private data members
    private:
        float real;
        float imaginary;

    // Public member functions
    public:
        // Function to initialize object values
        void setComplex(float r, float i) {
            real = r;
            imaginary = i;
        }

        // Function to display the complex number
        void displayComplex() {
            if (imaginary >= 0)
                cout << real << " + " << imaginary << "i" << endl;
            else
                cout << real << " - " << -imaginary << "i" << endl;
        }

        // Function to calculate sum of two complex numbers
        Complex addComplex(Complex c2) {
            Complex temp;
            temp.real = real + c2.real;
            temp.imaginary = imaginary + c2.imaginary;
            return temp; // Return the resulting complex number
        }
};

// Main function
int main() {
    Complex c1, c2, sum;

    // Initialize the first complex number
    c1.setComplex(3.4, 5.6);
    cout << "First complex number: ";
    c1.displayComplex();

    // Initialize the second complex number
    c2.setComplex(2.2, 3.8);
    cout << "Second complex number: ";
    c2.displayComplex();

    // Calculate the sum of the two complex numbers
    sum = c1.addComplex(c2);

    // Display the result
    cout << "Sum of the two complex numbers: ";
    sum.displayComplex();

    return 0;
}
