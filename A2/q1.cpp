/*
Create a structure in C++ containing the details of Students as details below and a
main function to execute the structure.
Data Members(properties):
Name
Roll No
Degree
Hostel
CurrentCGPA
Member Function(behavior):
addDetails();
updateDetails();
updateCGPA();
updateHostel();
displaydetails()
*/
#include <iostream>
#include <string>

using namespace std;

// Define the structure Student
struct Student {
    // Data members (properties)
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;

    // Member function to add details of a student
    void addDetails(string studentName, int studentRollNo, string studentDegree, string studentHostel, float studentCGPA) {
        name = studentName;
        rollNo = studentRollNo;
        degree = studentDegree;
        hostel = studentHostel;
        currentCGPA = studentCGPA;
    }

    // Member function to update details of a student
    void updateDetails(string studentName, int studentRollNo, string studentDegree, string studentHostel, float studentCGPA) {
        name = studentName;
        rollNo = studentRollNo;
        degree = studentDegree;
        hostel = studentHostel;
        currentCGPA = studentCGPA;
        cout << "Details updated successfully!" << endl;
    }

    // Member function to update CGPA of a student
    void updateCGPA(float newCGPA) {
        currentCGPA = newCGPA;
        cout << "CGPA updated successfully!" << endl;
    }

    // Member function to update hostel of a student
    void updateHostel(string newHostel) {
        hostel = newHostel;
        cout << "Hostel updated successfully!" << endl;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCGPA << endl;
    }
};

// Main function
int main() {
    // Creating an object of Student structure
    Student student1;

    // Adding details of the student
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

    return 0;
}
