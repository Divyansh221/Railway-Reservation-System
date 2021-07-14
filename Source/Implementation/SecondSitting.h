#ifndef SECONDSITTING_H
#define SECONDSITTING_H

#include "Tier0.h"

// Concrete Booking Class SecondSitting

class SecondSitting : public Tier0{
    static SecondSitting *p;
    SecondSitting(string name = "Second Sitting", float loadFactor = 0.50f, bool seat = true, bool isAC = false, int numTier = 0, bool isLuxury = false);		// Private Constructor

public:
    ~SecondSitting();		// Destructor
    static const SecondSitting& Type();		// Creates a static object and returns its reference
    float GetLoadFactor() const;		// Returns load factor of corresponding Booking class
    string GetName() const;		// Returns name of Booking Class as type string
    bool IsAC() const;			// Returns true when the corresponding booking class is AC 
    bool IsLuxury() const;		// Returns true when the corresponding booking class is luxurious 
    friend ostream& operator<<(ostream& os, const SecondSitting& ss);		// Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class  
};

#endif 