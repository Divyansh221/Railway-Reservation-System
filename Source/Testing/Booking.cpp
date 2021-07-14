#include "Booking.h"

int Booking::sBookingPNRSerial = 1;
const float Booking::sBaseFarePerKM = 0.50;
const float Booking::sACSurcharge = 50.00;
const float Booking::sLuxuryTaxPercent = 0.25;
vector<Booking*> Booking::sBookings = {};

Booking :: Booking(Station fromStation, Station toStation, Date date, 
                        const BookingClasses& b, const Passenger* p) : 
    fromStation_(fromStation),
    toStation_(toStation), 
    date_(date), 
    b_(b) 
{
        bookingStatus_ = true;
        Booking::ComputeFare();
        Booking::sBookings.push_back(this);
        name_ = b.GetName();
        
        if(b.IsSitting()) mode_ = "Sitting";
        else mode_ = "Sleeping";

        if(b.IsAC()) comfortType_ = "AC";
        else comfortType_ = "Non - AC";

        if(name_ == "AC 3 Tier") numTiers_ = 3;
        else if(name_ == "Sleeper") numTiers_ = 3;
        else if(name_ == "AC 2 Tier") numTiers_ = 2;
        else if(name_ == "AC First Class") numTiers_ = 2;
        else if(name_ == "First Class") numTiers_ = 2;
        else if(name_ == "AC Chair Car") numTiers_ = 0;
        else if(name_ == "Second Sitting") numTiers_ = 0;

        if(b.IsLuxury()) luxuryType_ = "Yes";
        else luxuryType_ = "No";
}

Booking :: ~Booking(){};

int Booking:: ComputeFare(){
    int distanceCalculated = Railways::GetInstance().GetDistance(fromStation_, toStation_);
    float baseFare = Booking::sBaseFarePerKM * distanceCalculated;
    float loadedFare = b_.GetLoadFactor() * baseFare;
    fare_ = loadedFare;
    if(b_.IsAC()) fare_ += Booking::sACSurcharge;
    if(b_.IsLuxury()) fare_ += Booking::sLuxuryTaxPercent * fare_;
    fare_ = round(fare_);
    return fare_;
}

ostream& operator<<(ostream& os, const Booking& b){
    os<<endl;
    os<<"BOOKING SUCCEEDED:"<<endl;
    os<<"PNR Number = "<<Booking::sBookingPNRSerial++<<endl;
    os<<"From Station = "<<b.fromStation_<<endl;
    os<<"To Station = "<<b.toStation_<<endl;
    os<<"Trvel Date = ";
    b.date_.Print();
    os<<"Travel Class = "<<b.name_<<endl;
    os<<" : Mode: "<<b.mode_<<endl;
    os<<" : Comfort: "<<b.comfortType_<<endl;
    os<<" : Bunks: "<<b.numTiers_<<endl;
    os<<" : luxury: "<<b.luxuryType_<<endl;
    os<<"Fare = "<<b.fare_<<endl;
    return os;
}

void Booking :: TestBooking(){
    cout<<" +++++ Testing Booking class +++++ "<<endl;
    Booking b1(Station("Mumbai"), Station("Delhi"), Date(15, 2, 2021), ACFirstClass::Type());
    cout<<"Testing ComputeFare : "<<endl;
    if(b1.ComputeFare() == 2776) cout<<"Booking Class member ComputeFare working properly."<<endl;
    else cout<<"Booking Class member ComputeFare not working properly."<<endl;
    cout<<" +++++ Booking class are working properly +++++ "<<endl;
    cout<<endl;
}