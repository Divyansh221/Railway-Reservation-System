#ifndef PASSENGER_H
#define PASSENGER_H

#include "Date.h"
#include "BookingClasses.h"

#include <iostream>
using namespace std;

enum Gender { Male = 1, Female };
enum Category { General = 1, Ladies, Senior_Citizen, Divyaang, Tatkal, Premium_Tatkal };

// Passenger Class

class Passenger{
    private:
        string name_;
        string aadhaar_;        // 3 strings for name, aadhar, mobile
        string mobile_;
        Gender gender_;         // 2 enums types Gender and Category
        Category category_;
        Date dateOfBirth_;      // Date of Birth as type Date
    public:
        Passenger(string name = "Rahul", string aadhaar = "19CS10027", string mobile = "8087614522", 
                        Gender gender = Male, Category category = General, Date dateOfBirth = Date(15, 2, 2021));       // Default constructor
        Passenger(const Passenger &p);      // Copy constructor
        virtual ~Passenger();       // Destructor
        Passenger& operator=(const Passenger &p);       // Takes a constant Passenger reference as argument and assign the new value to current Passenger (same as Passenger passed in arguments)
        virtual string GetName() const;     // Returns name of the Passenger
        virtual void PrintInfo() const;     // Prints the Passenger details
        friend ostream& operator<<(ostream& os, const Passenger& p);        // Prints the construced passenger details in a different style than Print
        static void TestPassenger();        // Provides scenarios for unit testing

};

#endif