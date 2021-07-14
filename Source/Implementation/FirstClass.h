#ifndef FIRSTCLASS_H
#define FIRSTCLASS_H

#include "Tier2.h"

using namespace std;

// Concrete Booking Class FirstClass

class FirstClass : public Tier2{
    static FirstClass *p;
    FirstClass(string name = "First Class", float loadFactor = 2.00f, bool seat = false, bool isAC = false, int numTier = 2, bool isLuxury = true);		// Private Constructor

public:
    ~FirstClass();		// Destructor
    static const FirstClass& Type();		// Creates a static object and returns its reference
    float GetLoadFactor() const;		// Returns load factor of corresponding Booking class
    string GetName() const;		// Returns name of Booking Class as type string
    bool IsAC() const;			// Returns true when the corresponding booking class is AC 
    bool IsLuxury() const;		// Returns true when the corresponding booking class is luxurious 
    friend ostream& operator<<(ostream& os, const FirstClass& fc);		// Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class  
};

#endif 