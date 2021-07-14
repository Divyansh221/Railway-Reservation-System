#ifndef ACFIRSTCLASS_H
#define ACFIRSTCLASS_H

#include "Tier2.h"

// Concrete Booking Class ACFirstClass

class ACFirstClass : public Tier2{
    static ACFirstClass *p;
    ACFirstClass(string name = "AC First Class", float loadFactor = 3.00f, bool seat = false, bool AC = true, int tier = 2, bool luxury = true);		// Private Constructor

public:
    ~ACFirstClass();		// Destructor
    static const ACFirstClass& Type();		// Creates a static object and returns its reference
    float GetLoadFactor() const;		// Returns load factor of corresponding Booking class
    string GetName() const;		// Returns name of Booking Class as type string
    bool IsAC() const;			// Returns true when the corresponding booking class is AC 
    bool IsLuxury() const;		// Returns true when the corresponding booking class is luxurious 
    friend ostream& operator<<(ostream& os, const ACFirstClass& acfc);		// Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class  
};

#endif 