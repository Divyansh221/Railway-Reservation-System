#ifndef ACCHAIRCAR_H
#define ACCHAIRCAR_H

#include "Tier0.h"

// Concrete Booking Class ACChairCar

class ACChairCar : public Tier0{
    static ACChairCar *p;
    ACChairCar(string name = "AC Chair Car", float loadFactor = 1.25f, bool seat = true, bool isAC = true, int numTier = 0, bool isLuxury = false);		// Private Constructor

public:
    ~ACChairCar();		// Destructor
    static const ACChairCar& Type();		// Creates a static object and returns its reference
    float GetLoadFactor() const;		// Returns load factor of corresponding Booking class
    string GetName() const;		// Returns name of Booking Class as type string
    bool IsAC() const;			// Returns true when the corresponding booking class is AC 
    bool IsLuxury() const;		// Returns true when the corresponding booking class is luxurious 
    friend ostream& operator<<(ostream& os, const ACChairCar& accc);		// Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class  
};

#endif 