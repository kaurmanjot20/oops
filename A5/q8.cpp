/*
You are tasked with creating a system for a library that tracks different types of users. The system needs to handle general user information such as name, ID, and contact details. There are two specific types of users: Student and Teacher. Each type of user has additional attributes, such as grade level for students and department for teachers. Implement a base class LibraryUser with general attributes. Then, create two derived classes Student and Teacher that inherit from LibraryUser and add their own specific attributes. Demonstrate how hierarchical inheritance is applied in this scenario.
*/
#include <iostream>
#include <string>
using namespace std;

// Base class: LibraryUser
class LibraryUser {
protected:
    string name;
    int userID;
    string contactInfo;

public:
    LibraryUser(string n, int id, string contact) {
        name = n;
        userID = id;
        contactInfo = contact;
    }

    // Function to display general user information
    void displayUserInfo() const {
        cout << "Name: " << name << endl;
        cout << "User ID: " << userID << endl;
        cout << "Contact Info: " << contactInfo << endl;
    }
};

// Derived class: Student (inherits from LibraryUser)
class Student : public LibraryUser {
private:
    int gradeLevel;  // Additional attribute for students

public:
    // Constructor for Student without initializer list
    Student(string n, int id, string contact, int grade) : LibraryUser(n, id, contact) {
        gradeLevel = grade;
    }

    // Function to display student-specific information
    void displayStudentInfo() const {
        displayUserInfo();  // Call base class function to display general info
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

// Derived class: Teacher (inherits from LibraryUser)
class Teacher : public LibraryUser {
private:
    string department;  // Additional attribute for teachers

public:
    // Constructor for Teacher without initializer list
    Teacher(string n, int id, string contact, string dept) : LibraryUser(n, id, contact) {
        department = dept;
    }

    // Function to display teacher-specific information
    void displayTeacherInfo() const {
        displayUserInfo();  // Call base class function to display general info
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create a student object
    Student student1("Alice Johnson", 1001, "alice.johnson@example.com", 12);
    cout << "Student Information:\n";
    student1.displayStudentInfo();
    cout << endl;

    // Create a teacher object
    Teacher teacher1("Dr. Bob Smith", 2002, "bob.smith@example.com", "Mathematics");
    cout << "Teacher Information:\n";
    teacher1.displayTeacherInfo();

    return 0;
}
