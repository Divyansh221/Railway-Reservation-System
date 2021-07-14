#include "Date.h"
#include "Station.h"
#include "AC3Tier.h"
#include "AC2Tier.h"
#include "ACFirstClass.h"
#include "ACChairCar.h"
#include "FirstClass.h"
#include "Sleeper.h"
#include "Sleeper.h"
#include "Booking.h"
#include "Railways.h"
#include "Passenger.h"
#include "SecondSitting.h"
#include "BookingClasses.h"
#include <iostream> 
using namespace std;

void MyBookingApplication() {
    Date d1(15, 02, 2021);
    cout<<"Testing Print of Date class : "<<endl  ;
    cout<<"d1 : ";
    d1.Print();
    cout<<"Testing Ostream of Date class : ";
    cout<<d1<<endl;
    Station s1("Chennai");
    cout<<"Testing Ostream of Station class (Printing to terminal) : ";
    cout<<s1<<endl;
    cout<<"Testing Print of Railways class : "<<endl;   
    cout<<"Testing stations and sDistStations : "<<endl;
    Railways::GetInstance().Print();
    Passenger p;
    cout<<"Testing PrintInfo Passenger class : "<<endl;
    p.PrintInfo();
    cout<<"Testing Ostream Passenger class : "<<endl;
    cout<<p;
    Booking b0(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2021), ACFirstClass::Type());
    cout<<"Testing Ostream of Booking class (Printing to terminal) : ";
    cout<<b0;
    // Bookings by different booking classes
    // <BookingClasses>::Type() returns the constant object of the respective type
    Booking b1(Station("Mumbai"), Station("Delhi"), Date(15, 3, 2021), AC3Tier::Type());
    Booking b2(Station("Kolkata"), Station("Mumbai"), Date(16, 3, 2021), Sleeper::Type());
    Booking b3(Station("Mumbai"), Station("Chennai"), Date(17, 3, 2021), ACChairCar::Type());
    Booking b4(Station("Mumbai"), Station("Chennai"), Date(18, 3, 2021), AC2Tier::Type());
    Booking b5(Station("Chennai"), Station("Mumbai"), Date(19, 3, 2021), SecondSitting::Type());
    Booking b6(Station("Chennai"), Station("Kolkata"), Date(20, 3, 2021), FirstClass::Type());
    // Output the bookings done where sBookings is the collection of bookings done
    vector<Booking*>::iterator it;
    for (it = Booking::sBookings.begin(); it < Booking::sBookings.end(); ++it) {
        cout << *(*it);
    }
    Booking::sBookingPNRSerial = 0;
    return;
}

int main() {
    MyBookingApplication();
    return 0;
}