#ifndef SLEEPER_H
#define SLEEPER_H

#include "Tier3.h"

// Concrete Booking Class Sleeper

class Sleeper : public Tier3{
    static Sleeper *p;
    Sleeper(string name = "Sleeper", float loadFactor = 1.00f, bool seat = false, bool isAC = false, int numTier = 3, bool isLuxury = false);       // Private Constructor

public:
    ~Sleeper();     // Destructor
    static const Sleeper& Type();       // Creates a static object and returns its reference
    float GetLoadFactor() const;        // Returns load factor of corresponding Booking class
    string GetName() const;     // Returns name of Booking Class as type string
    bool IsAC() const;          // Returns true when the corresponding booking class is AC 
    bool IsLuxury() const;      // Returns true when the corresponding booking class is luxurious 
    friend ostream& operator<<(ostream& os, const Sleeper& s);      // Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class  
};

#endif 