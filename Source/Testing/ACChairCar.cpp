#include "ACChairCar.h"

ACChairCar *ACChairCar::p = NULL;

ACChairCar :: ACChairCar(string name, float loadFactor, bool seat, bool isAC, int numTier, bool isLuxury){
    name_ = name;
    loadFactor_ = loadFactor;
    seat_ = seat;
    isAC_ = isAC;
    numTier_ = numTier;
    isLuxury = isLuxury;
}

const ACChairCar& ACChairCar::Type(){
    if(!p){
        p = new ACChairCar();
    }
    return *p;
}

float ACChairCar::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string ACChairCar::GetName() const{
    return (*this).name_;
}

bool ACChairCar::IsLuxury() const{
    return (*this).isLuxury_;
}

bool ACChairCar::IsAC() const{
    return (*this).isAC_;
}

ostream& operator<<(ostream& os, const ACChairCar& accc){
    os<<"Travel Class = AC Chair Car"<<endl;
    os<<" : Mode: "<<"Sitting"<<endl;
    os<<" : Comfort: "<<"AC"<<endl;
    os<<" : Bunks: "<<"0"<<endl;
    os<<" : luxury: "<<"No"<<endl;
    return os;
}