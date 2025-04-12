#include <iostream>
#include <string>
#include <vector>  // Needed for using std::vector

using namespace std; // Prevents us from having to use "std::"

// Defining a simple Car class
class Car {
public:
    // Public attributes for now; we will discuss "private" and "protected" next week
    string VIN;              // Vehicle Identification Number (should be unique for each car)
    string make;             // Car brand (e.g., Toyota, Ford)
    string model;            // Specific model (e.g., Corolla, Mustang)
    int year;                // Manufacturing year
    double mileage;          // Current mileage of the car
    vector<string> owners;   // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList) {
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }

    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
        
        // Displaying owners
        cout << "Owners: ";
        for (const string& owner : owners) {
            cout << owner << " ";
        }
        cout << endl;
    }
};

int main() {
    
    //declare requested vector containing previous owners
    vector<string> previousOwners = {"J. Jonah Jameson,", "Peter Parker,", "Norman Osborn,", "Eddie Brock."};

    //call constructor
    Car car1("J625GDF78", "Ford", "F150", 2010, 180596, previousOwners);

    //call class method to print information about the car
    car1.displayInfo();


}

// What attributes--if any--should be private, and why?

/*
Write answer here:

    For data security the owners' names and maybe the VIN numbers of the cars would need to be private. That way users couldn't see or
    modify them. Based on my research there may be other things that would be private as well, but there seems to be some disagreement
    on how that's used.

*/