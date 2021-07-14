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

void TestBookingClasses(const BookingClasses& b){
	cout<<" +++++ Testing Booking classes +++++ "<<endl;
	cout<<"Testing on concrete booking class ACChairCar :"<<endl;
	cout<<"Testing GetName : ";
	if(b.GetName() == "AC Chair Car") cout<<"ACChairCar Class member GetName working properly."<<endl;
	else cout<<"ACChairCar Class member GetName not working properly."<<endl;
	cout<<"Testing GetTier : ";
	if(b.GetTier() == 0) cout<<"ACChairCar Class member GetTier working properly."<<endl;
	else cout<<"ACChairCar Class member GetTier not working properly."<<endl;
	cout<<"Testing GetLoadFactor : ";
	if(b.GetLoadFactor() == 1.25) cout<<"ACChairCar Class member GetLoadFactor working properly."<<endl;
	else cout<<"ACChairCar Class member GetLoadFactor not working properly."<<endl;
	cout<<"Testing IsAC : ";
	if(b.IsAC() == true) cout<<"ACChairCar Class member IsAC working properly."<<endl;
	else cout<<"ACChairCar Class member IsAC not working properly."<<endl;
	cout<<"Testing IsLuxury : ";
	if(b.IsLuxury() == false) cout<<"ACChairCar Class member IsLuxury working properly."<<endl;
	else cout<<"ACChairCar Class member IsLuxury not working properly."<<endl;
	cout<<"Testing IsSitting : ";
	if(b.IsSitting() == true) cout<<"ACChairCar Class member IsSitting working properly."<<endl;
	else cout<<"ACChairCar Class member IsSitting not working properly."<<endl;
	cout<<" +++++ Booking classes is working properly +++++ "<<endl;
	cout<<endl;
}

int main() {
    Date::TestDate();
    Station::TestStation();
    Railways::TestRailways();
    Passenger::TestPassenger();
    TestBookingClasses(ACChairCar::Type());
    Booking::TestBooking();
    return 0;
}