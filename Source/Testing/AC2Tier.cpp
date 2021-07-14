#include "AC2Tier.h"

AC2Tier *AC2Tier::p = NULL;

AC2Tier :: AC2Tier(string name, float loadFactor, bool seat, bool isAC, int numTier, bool isLuxury){
    name_ = name;
    loadFactor_ = loadFactor;
    seat_ = seat;
    isAC_ = isAC;
    numTier_ = numTier;
    isLuxury = isLuxury;
}

const AC2Tier& AC2Tier::Type(){
    if(!p){
        p = new AC2Tier();
    }
    return *p;
}

float AC2Tier::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string AC2Tier::GetName() const{
    return (*this).name_;
}

bool AC2Tier::IsLuxury() const{
    return (*this).isLuxury_;
}

bool AC2Tier::IsAC() const{
    return (*this).isAC_;
}

ostream& operator<<(ostream& os, const AC2Tier& ac2t){
    os<<"Travel Class = AC2Tier"<<endl;
    os<<" : Mode: "<<"Sleeping"<<endl;
    os<<" : Comfort: "<<"Non-AC"<<endl;
    os<<" : Bunks: "<<"0"<<endl;
    os<<" : luxury: "<<"No"<<endl;
    return os;
}