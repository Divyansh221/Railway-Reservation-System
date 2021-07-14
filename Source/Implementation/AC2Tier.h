#ifndef AC2TIER_H
#define AC2TIER_H

#include "Tier2.h"

// Concrete Booking Class AC2Tier

class AC2Tier : public Tier2{
    static AC2Tier *p;
    AC2Tier(string name = "AC 2 Tier", float loadFactor = 2.00f, bool seat = false, bool isAC = true, int numTier = 2, bool isLuxury = false);		// Private Constructor

public:
    ~AC2Tier();			// Destructor
    static const AC2Tier& Type();		// Creates a static object and returns its reference
    float GetLoadFactor() const;		// Returns load factor of corresponding Booking class
    string GetName() const;		// Returns name of Booking Class as type string
    bool IsAC() const;			// Returns true when the corresponding booking class is AC 
    bool IsLuxury() const;		// Returns true when the corresponding booking class is luxurious 
    friend ostream& operator<<(ostream& os, const AC2Tier& ac2t);	// Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class  
};

#endif