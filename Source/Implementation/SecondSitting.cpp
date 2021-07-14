#include "SecondSitting.h"

SecondSitting *SecondSitting::p = NULL;

SecondSitting :: SecondSitting(string name, float loadFactor, bool seat, bool isAC, int numTier, bool isLuxury){
    name_ = name;
    loadFactor_ = loadFactor;
    seat_ = seat;
    isAC_ = isAC;
    numTier_ = numTier;
    isLuxury_ = isLuxury;
}

const SecondSitting& SecondSitting::Type(){
    if(!p){
        p = new SecondSitting();
    }
    return *p;
}

float SecondSitting::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string SecondSitting::GetName() const{
    return (*this).name_;
}

bool SecondSitting::IsLuxury() const{
    return (*this).isLuxury_;
}

bool SecondSitting::IsAC() const{
    return (*this).isAC_;
}

ostream& operator<<(ostream& os, const SecondSitting& ss){
    os<<"Travel Class = Second Sitting"<<endl;
    os<<" : Mode: "<<"Sitting"<<endl;
    os<<" : Comfort: "<<"AC"<<endl;
    os<<" : Bunks: "<<"0"<<endl;
    os<<" : luxury: "<<"No"<<endl;
    return os;
}