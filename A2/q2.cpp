#include <iostream>
#include <string>

using namespace std;

// Define the class Student
class Student {
    // Private data members (properties)
    private:
        string name;
        int rollNo;
        string degree;
        string hostel;
        float currentCGPA;

        // Private member function
        void updateDetailsPrivate(string studentName, int studentRollNo, string studentDegree, string studentHostel, float studentCGPA) {
            name = studentName;
            rollNo = studentRollNo;
            degree = studentDegree;
            hostel = studentHostel;
            currentCGPA = studentCGPA;
        }

    // Public member functions
    public:
        // Public member function to add initial details
        void addDetails(string studentName, int studentRollNo, string studentDegree, string studentHostel, float studentCGPA) {
            name = studentName;
            rollNo = studentRollNo;
            degree = studentDegree;
            hostel = studentHostel;
            currentCGPA = studentCGPA;
        }

        // Public member function to update CGPA
        void updateCGPA(float newCGPA) {
            currentCGPA = newCGPA;
            cout << "CGPA updated successfully!" << endl;
        }

        // Public member function to update hostel
        void updateHostel(string newHostel) {
            hostel = newHostel;
            cout << "Hostel updated successfully!" << endl;
        }

        // Public member function to display student details
        void displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Degree: " << degree << endl;
            cout << "Hostel: " << hostel << endl;
            cout << "Current CGPA: " << currentCGPA << endl;
        }

        // Public function to update all details (this calls the private updateDetailsPrivate)
        void updateDetailsPublic(string studentName, int studentRollNo, string studentDegree, string studentHostel, float studentCGPA) {
            updateDetailsPrivate(studentName, studentRollNo, studentDegree, studentHostel, studentCGPA);
            cout << "Details updated successfully!" << endl;
        }
};

// Main function
int main() {
    // Creating an object of Student class
    Student student1;

    // Adding initial details
    student1.addDetails("John Doe", 101, "B.Tech", "Hostel A", 8.5);

    // Display the added details
    cout << "Student Details:" << endl;
    student1.displayDetails();

    // Update CGPA
    student1.updateCGPA(9.0);

    // Update Hostel
    student1.updateHostel("Hostel B");

    // Display the updated details
    cout << "\nUpdated Student Details:" << endl;
    student1.displayDetails();

    // Update all details using public function that calls private method
    student1.updateDetailsPublic("Jane Doe", 102, "B.Sc", "Hostel C", 9.2);

    // Display the details after updating
    cout << "\nDetails after full update:" << endl;
    student1.displayDetails();

    return 0;
}
