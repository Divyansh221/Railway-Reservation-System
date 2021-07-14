#include "Sleeper.h"

Sleeper *Sleeper::p = NULL;

Sleeper :: Sleeper(string name, float loadFactor, bool seat, bool isAC, int numTier, bool isLuxury){
    name_ = name;
    loadFactor_ = loadFactor;
    seat_ = seat;
    isAC_ = isAC;
    numTier_ = numTier;
    isLuxury_ = isLuxury;
}

const Sleeper& Sleeper::Type(){
    if(!p){
        p = new Sleeper();
    }
    return *p;
}

float Sleeper::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string Sleeper::GetName() const{
    return (*this).name_;
}

bool Sleeper::IsLuxury() const{
    return (*this).isLuxury_;
}

bool Sleeper::IsAC() const{
    return (*this).isAC_;
}

ostream& operator<<(ostream& os, const Sleeper& s){
    os<<"Travel Class = Sleeper"<<endl;
    os<<" : Mode: "<<"Sleeping"<<endl;
    os<<" : Comfort: "<<"Non-AC"<<endl;
    os<<" : Bunks: "<<"3"<<endl;
    os<<" : luxury: "<<"No"<<endl;
    return os;
}