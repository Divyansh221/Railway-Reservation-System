#ifndef AC3TIER_H
#define AC3TIER_H

#include "Tier3.h"

// Concrete Booking Class AC3Tier

class AC3Tier : public Tier3{
    static AC3Tier *p;
    AC3Tier(string name = "AC 3 Tier", float loadFactor = 1.75f, bool seat = false, bool isAC = true, int numTier = 3, bool isLuxury = false);		// Private Constructor

public:
    ~AC3Tier();    // Destructor
    static const AC3Tier& Type();		// Creates a static object and returns its reference
    float GetLoadFactor() const;		// Returns load factor of corresponding Booking class
    string GetName() const;		// Returns name of Booking Class as type string
    bool IsAC() const;			// Returns true when the corresponding booking class is AC 
    bool IsLuxury() const;		// Returns true when the corresponding booking class is luxurious 
    friend ostream& operator<<(ostream& os, const AC3Tier& ac3t);		// Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class  
};

#endif 