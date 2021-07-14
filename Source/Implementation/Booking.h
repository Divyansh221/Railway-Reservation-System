#ifndef BOOKING_H
#define BOOKING_H

#include "Station.h"
#include "Date.h"
#include "BookingClasses.h"
#include "AC3Tier.h"
#include "AC2Tier.h"
#include "ACFirstClass.h"
#include "ACChairCar.h"
#include "FirstClass.h"
#include "Sleeper.h"
#include "SecondSitting.h"
#include "Sleeper.h"
#include "Booking.h"
#include "Railways.h"
#include "Passenger.h"

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Booking{
private:
    Station fromStation_;
    Station toStation_;         // 2 stations, fromStation and toStation
    const Date date_;           // 1 Date for journey date
    const BookingClasses& b_;       // 1 BookingClass
    bool bookingStatus_;
    int numTiers_;
    float fare_;        // A float variable to store fare calculated
    string name_;
    string mode_;               // 4 strings for name, mode, confortType, luxuryType, bookingMessage
    string comfortType_;
    string luxuryType_;
    static const float sBaseFarePerKM;
    static const float sACSurcharge;        // 3 static consts for sACSurcharge, sLuxuryTaxPercent and sBaseFarePerKM
    static const float sLuxuryTaxPercent;
public:
    Booking(Station fromStation = Station("Delhi"), Station toStation = Station("Mumbai"), Date date = Date(16, 2, 2021), 
                const BookingClasses& b = ACFirstClass::Type(), const Passenger* p = NULL);     // Default constructor
    virtual ~Booking();     // Destructor
    virtual int ComputeFare();      // Returns the fare of the booking rounded to the nearest integer
    static vector<Booking*> sBookings;      // A static vector (sBookings) of pointers to Bookings till now
    static int sBookingPNRSerial;       // A static integer for last alotted PNR serial number sBookingPNRSerial
    friend ostream& operator<<(ostream& os, const Booking &bk);   // Takes a constant Booking reference and an ostream reference as arguments and prints details of the Booking for the journey     
    static void TestBooking();          // Provides scenarios for unit testing
};

#endif