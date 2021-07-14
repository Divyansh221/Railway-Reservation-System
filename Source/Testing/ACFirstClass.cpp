#include "ACFirstClass.h"

ACFirstClass *ACFirstClass::p = NULL;

ACFirstClass :: ACFirstClass(string name, float loadFactor, bool seat, bool isAC, int numTier, bool isLuxury){
    name_ = name;
    loadFactor_ = loadFactor;
    seat_ = seat;
    isAC_ = isAC;
    numTier_ = numTier;
    isLuxury_ = isLuxury;
}

const ACFirstClass& ACFirstClass::Type(){
    if(!p){
        p = new ACFirstClass();
    }
    return *p;
}

float ACFirstClass::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string ACFirstClass::GetName() const{
    return (*this).name_;
}

bool ACFirstClass::IsAC() const{
    return (*this).isAC_;
}

bool ACFirstClass::IsLuxury() const{
    return (*this).isLuxury_;
}

ostream& operator<<(ostream& os, const ACFirstClass& acfc){
    os<<"Travel Class = AC First Class"<<endl;
    os<<" : Mode: "<<"Sleeping"<<endl;
    os<<" : Comfort: "<<"AC"<<endl;
    os<<" : Bunks: "<<"3"<<endl;
    os<<" : luxury: "<<"Yes"<<endl;
    return os;
}