#include "AC3Tier.h"

AC3Tier *AC3Tier::p = NULL;

AC3Tier :: AC3Tier(string name, float loadFactor, bool seat, bool isAC, int numTier, bool isLuxury){
    name_ = name;
    loadFactor_ = loadFactor;
    seat_ = seat;
    isAC_ = isAC;
    numTier_ = numTier;
    isLuxury = isLuxury;
}

const AC3Tier& AC3Tier::Type(){
    if(!p){
        p = new AC3Tier();
    }
    return *p;
}

float AC3Tier::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string AC3Tier::GetName() const{
    return (*this).name_;
}

bool AC3Tier::IsLuxury() const{
    return (*this).isLuxury_;
}

bool AC3Tier::IsAC() const{
    return (*this).isAC_;
}

ostream& operator<<(ostream& os, const AC3Tier& ac3t){
    os<<"Travel Class = AC3Tier"<<endl;
    os<<" : Mode: "<<"Sleeping"<<endl;
    os<<" : Comfort: "<<"Non-AC"<<endl;
    os<<" : Bunks: "<<"0"<<endl;
    os<<" : luxury: "<<"No"<<endl;
    return os;
}