#ifndef BOOKINGCLASSES_H
#define BOOKINGCLASSES_H

#include <iostream>
using namespace std;

// Abstract Base class BookingClasses

class BookingClasses{
    protected:
        string name_;       // Name of the booking class as type string
        bool isLuxury_;     // Boolean value for luxury status
        bool isAC_;         // Boolean value for AC status
        bool seat_;         // Boolean value for sitting status
        int numTier_;       // Integer value for number of tiers
        float loadFactor_;  // Float value to store load factor
    public:
        virtual float GetLoadFactor() const = 0;     // Returns load factor of corresponding Booking class
        virtual string GetName() const = 0;         // returns name of Booking Class as type string
        virtual bool IsAC() const = 0;              // Returns true when the corresponding booking class is AC 
        virtual bool IsLuxury() const = 0;          // Returns true when the corresponding booking class is luxurious  
        virtual bool IsSitting() const = 0;         // Returns true when the corresponding booking class has Seats      
        virtual int GetTier() const = 0;            // Returns the number of tiers in the corresponding booking class as type integer
        friend ostream& operator<<(ostream& os, const BookingClasses &b);       // Takes a constant BookingClass reference and an ostream reference as arguments and prints details of the Booking class 
};  

#endif