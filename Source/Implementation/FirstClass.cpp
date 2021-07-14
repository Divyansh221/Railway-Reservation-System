#include "FirstClass.h"

FirstClass *FirstClass::p = NULL;

FirstClass :: FirstClass(string name, float loadFactor, bool seat, bool isAC, int numTier, bool isLuxury){
    name_ = name;
    loadFactor_ = loadFactor;
    seat_ = seat;
    isAC_ = isAC;
    numTier_ = numTier;
    isLuxury_ = isLuxury;
}

const FirstClass& FirstClass::Type(){
    if(!p){
        p = new FirstClass();
    }
    return *p;
}

float FirstClass::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string FirstClass::GetName() const{
    return (*this).name_;
}

bool FirstClass::IsLuxury() const{
    return (*this).isLuxury_;
}

bool FirstClass::IsAC() const{
    return (*this).isAC_;
}

ostream& operator<<(ostream& os, const FirstClass& fc){
    os<<"Travel Class = First Class"<<endl;
    os<<" : Mode: "<<"Sleeping"<<endl;
    os<<" : Comfort: "<<"Non-AC"<<endl;
    os<<" : Bunks: "<<"2"<<endl;
    os<<" : luxury: "<<"Yes"<<endl;
    return os;
}