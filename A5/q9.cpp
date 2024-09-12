/*
9.	A logistics company needs a software system to manage its vehicle fleet. All vehicles share common attributes like make, model, and year. Trucks have additional attributes like load_capacity. Furthermore, refrigerated trucks have a special attribute called temperature_control. Implement a base class Vehicle with common attributes. Then, create a derived class Truck that adds the load_capacity attribute. Finally, create another derived class RefrigeratedTruck that inherits from Truck and adds the temperature_control attribute. Demonstrate how multilevel inheritance works in this case.
*/
#include <iostream>
#include <string>
using namespace std;

// Base class: Vehicle
class Vehicle {
protected:
    string make;
    string model;
    int year;

public:
    // Constructor for Vehicle without initializer list
    Vehicle(string mk, string mdl, int yr) {
        make = mk;
        model = mdl;
        year = yr;
    }

    // Function to display vehicle information
    void displayVehicleInfo() const {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

// Derived class: Truck (inherits from Vehicle)
class Truck : public Vehicle {
protected:
    double load_capacity;  // Load capacity in tons

public:
    // Constructor for Truck without initializer list
    Truck(string mk, string mdl, int yr, double capacity) : Vehicle(mk, mdl, yr) {
        load_capacity = capacity;
    }

    // Function to display truck information
    void displayTruckInfo() const {
        displayVehicleInfo();  // Call base class function to display vehicle info
        cout << "Load Capacity: " << load_capacity << " tons" << endl;
    }
};

// Derived class: RefrigeratedTruck (inherits from Truck)
class RefrigeratedTruck : public Truck {
private:
    double temperature_control;  // Temperature control in degrees Celsius

public:
    // Constructor for RefrigeratedTruck without initializer list
    RefrigeratedTruck(string mk, string mdl, int yr, double capacity, double temp) 
        : Truck(mk, mdl, yr, capacity) {
        temperature_control = temp;
    }

    // Function to display refrigerated truck information
    void displayRefrigeratedTruckInfo() const {
        displayTruckInfo();  // Call derived class function to display truck info
        cout << "Temperature Control: " << temperature_control << " °C" << endl;
    }
};

int main() {
    // Create a Truck object
    Truck truck1("Ford", "F-150", 2020, 5.0);
    cout << "Truck Information:\n";
    truck1.displayTruckInfo();
    cout << endl;

    // Create a RefrigeratedTruck object
    RefrigeratedTruck refrigeratedTruck1("Volvo", "VNL 760", 2019, 20.0, -5.0);
    cout << "Refrigerated Truck Information:\n";
    refrigeratedTruck1.displayRefrigeratedTruckInfo();

    return 0;
}
