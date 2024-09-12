/* You are developing a software system for an academic institution. The institution has various roles like Person, Staff, and Student. A Person has general attributes like name and address. Staff members, who are a type of Person, have additional attributes like employee_id and department. Student, another type of Person, has attributes like student_id and grade. Some Staff members are also Students (e.g., teaching assistants) and need to inherit from both classes. Implement a base class Person with general attributes. Then, create derived classes Staff and Student that inherit from Person and add their specific attributes. Finally, create a TeachingAssistant class that inherits from both Staff and Student. Demonstrate how hybrid inheritance is applied and managed in this scenario.*/
#include <iostream>
#include <string>
using namespace std;

// Base class: Person
class Person {
protected:
    string name;
    string address;

public:
    // Constructor for Person without initializer list
    Person(string n, string addr) {
        name = n;
        address = addr;
    }

    // Function to display person information
    void displayPersonInfo() const {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

// Derived class: Staff (inherits from Person)
class Staff : virtual public Person {
protected:
    int employee_id;
    string department;

public:
    // Constructor for Staff without initializer list
    Staff(string n, string addr, int empID, string dept) : Person(n, addr) {
        employee_id = empID;
        department = dept;
    }

    // Function to display staff information
    void displayStaffInfo() const {
        displayPersonInfo();  // Call base class function to display person info
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
    }
};

// Derived class: Student (inherits from Person)
class Student : virtual public Person {
protected:
    int student_id;
    double grade;

public:
    // Constructor for Student without initializer list
    Student(string n, string addr, int stuID, double grd) : Person(n, addr) {
        student_id = stuID;
        grade = grd;
    }

    // Function to display student information
    void displayStudentInfo() const {
        displayPersonInfo();  // Call base class function to display person info
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

// Derived class: TeachingAssistant (inherits from both Staff and Student)
class TeachingAssistant : public Staff, public Student {
public:
    // Constructor for TeachingAssistant without initializer list
    TeachingAssistant(string n, string addr, int empID, string dept, int stuID, double grd)
        : Person(n, addr), Staff(n, addr, empID, dept), Student(n, addr, stuID, grd) {}

    // Function to display teaching assistant information
    void displayTeachingAssistantInfo() const {
        // Call display functions from both Staff and Student
        cout << "--- Teaching Assistant Information ---" << endl;
        displayPersonInfo();
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    // Create a TeachingAssistant object
    TeachingAssistant ta("John Doe", "123 University St", 101, "Computer Science", 2020, 3.9);

    // Display the teaching assistant information
    ta.displayTeachingAssistantInfo();

    return 0;
}
