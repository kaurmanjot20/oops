/*
A software company is creating a program to simulate a car's dashboard. The dashboard needs to display speed, fuel level, and temperature. The speed is controlled by a Speedometer class, the fuel level by a FuelGauge class, and the temperature by a Thermometer class. Implement the three classes: Speedometer, FuelGauge, and Thermometer, each with relevant attributes and methods. Then, create a CarDashboard class that inherits from all three classes to display the combined information on the dashboard. Demonstrate how multiple inheritance is used to build this class.
*/
#include <iostream>
using namespace std;

// Class to represent the Speedometer
class Speedometer {
protected:
    int speed;  // Speed in km/h

public:
    Speedometer() : speed(0) {}  // Constructor initializing speed to 0

    // Function to set speed
    void setSpeed(int s) {
        if (s >= 0 && s <= 240) {  // Validating speed within the range 0-240 km/h
            speed = s;
        } else {
            cout << "Invalid speed! Speed must be between 0 and 240 km/h.\n";
        }
    }

    // Function to get current speed
    int getSpeed() const {
        return speed;
    }
};

// Class to represent the FuelGauge
class FuelGauge {
protected:
    int fuelLevel;  // Fuel level in percentage (0 to 100)

public:
    FuelGauge() : fuelLevel(100) {}  // Constructor initializing fuel level to 100%

    // Function to set fuel level
    void setFuelLevel(int level) {
        if (level >= 0 && level <= 100) {  // Validating fuel level within range 0-100%
            fuelLevel = level;
        } else {
            cout << "Invalid fuel level! Must be between 0 and 100%.\n";
        }
    }

    // Function to get current fuel level
    int getFuelLevel() const {
        return fuelLevel;
    }
};

// Class to represent the Thermometer
class Thermometer {
protected:
    int temperature;  // Temperature in degrees Celsius

public:
    Thermometer() : temperature(25) {}  // Constructor initializing temperature to 25°C

    // Function to set temperature
    void setTemperature(int temp) {
        if (temp >= -40 && temp <= 150) {  // Validating temperature range (-40°C to 150°C)
            temperature = temp;
        } else {
            cout << "Invalid temperature! Must be between -40 and 150 degrees Celsius.\n";
        }
    }

    // Function to get current temperature
    int getTemperature() const {
        return temperature;
    }
};

// Class to represent the CarDashboard (inherits from Speedometer, FuelGauge, Thermometer)
class CarDashboard : public Speedometer, public FuelGauge, public Thermometer {
public:
    // Function to display all dashboard info
    void displayDashboard() const {
        cout << "Car Dashboard Information:\n";
        cout << "Speed: " << getSpeed() << " km/h\n";
        cout << "Fuel Level: " << getFuelLevel() << "%\n";
        cout << "Temperature: " << getTemperature() << "°C\n";
    }
};

int main() {
    // Create an instance of CarDashboard
    CarDashboard myCar;

    // Set speed, fuel level, and temperature
    myCar.setSpeed(120);          // Set speed to 120 km/h
    myCar.setFuelLevel(75);       // Set fuel level to 75%
    myCar.setTemperature(35);     // Set temperature to 35°C

    // Display all dashboard information
    myCar.displayDashboard();

    return 0;
}
