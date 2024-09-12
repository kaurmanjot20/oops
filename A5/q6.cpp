/*
Implement a base class Book with attributes title, author, and price. Then, create a derived class Textbook that inherits from Book and adds a new attribute subject. Demonstrate how single inheritance is used to manage the data for general books and textbooks.
*/
#include <iostream>
#include <string>
using namespace std;

// Base class: Book
class Book {
protected:
    string title;
    string author;
    double price;

public:
    // Constructor for Book
    Book(string t, string a, double p) : title(t), author(a), price(p) {}

    // Function to display book details
    void displayBookInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

// Derived class: Textbook (inherits from Book)
class Textbook : public Book {
private:
    string subject;

public:
    // Constructor for Textbook (calls the base class constructor)
    Textbook(string t, string a, double p, string s) : Book(t, a, p), subject(s) {}

    // Function to display textbook details
    void displayTextbookInfo() {
        displayBookInfo();  // Call base class function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create an object of the base class Book
    Book generalBook("The Great Gatsby", "F. Scott Fitzgerald", 10.99);
    cout << "General Book Info:" << endl;
    generalBook.displayBookInfo();
    cout << endl;

    // Create an object of the derived class Textbook
    Textbook mathTextbook("Advanced Mathematics", "John Doe", 49.99, "Mathematics");
    cout << "Textbook Info:" << endl;
    mathTextbook.displayTextbookInfo();

    return 0;  // The closing brace for the main function
}
