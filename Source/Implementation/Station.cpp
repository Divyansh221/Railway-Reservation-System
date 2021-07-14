#include "Station.h"

vector<pair< pair<Station, Station>, int> > Station :: sDistanceStations = {
    {{Station("Mumbai"), Station("Delhi")}, 1447},
    {{Station("Mumbai"), Station("Banglore")}, 981},
    {{Station("Mumbai"), Station("Kolkata")}, 2014},
    {{Station("Mumbai"), Station("Chennai")}, 1338},
    {{Station("Delhi"), Station("Banglore")}, 2150},
    {{Station("Delhi"), Station("Kolkata")}, 1472},
    {{Station("Delhi"), Station("Chennai")}, 2180},
    {{Station("Banglore"), Station("Kolkata")}, 1871},
    {{Station("Banglore"), Station("Chennai")}, 350},
    {{Station("Kolkata"), Station("Chennai")}, 1659}
};

Station :: Station(string name): name_(name)
{}

Station :: Station(const Station &s): name_(s.name_)
{}

Station :: ~Station(){}

string Station :: GetName() const{
    return name_;
}

int Station :: GetDistance(const Station &s) const{
    string name1 = (*this).GetName();
    string name2 = s.GetName();
    vector<pair< pair<Station, Station>, int> >::iterator it;
    for(it = Station::sDistanceStations.begin(); it < Station::sDistanceStations.end(); ++it){
        if((*it).first.first.GetName() == name1 && (*it).first.second.GetName() == name2 || 
            (*it).first.first.GetName() == name2 && (*it).first.second.GetName() == name1){
            return (*it).second;
        }
    }
    return 0;
}

Station& Station :: operator=(const Station &s){
    if(this != &s){
        name_ = s.name_;
    }
    return *this;
}

bool operator==(const Station &s1, const Station &s2){
    if(s1.name_ == s2.name_) return true;
    else return false;
}

ostream& operator<<(ostream& os, const Station &s){
    os<<s.name_;
    return os;
}

void Station :: TestStation(){
    cout<<" +++++ Testing Station class +++++ "<<endl;
    Station s1("Chennai"), s2("Mumbai");
    cout<<"Testing GetName : "<<endl;
    if(s1.GetName() == "Chennai") cout<<"Station Class member GetName working properly."<<endl;
    else cout<<"Station Class member GetName not working properly."<<endl;
    cout<<"Testing GetDistance : "<<endl;
    if(s1.GetDistance(s2) == 1338) cout<<"Station Class member GetDistance working properly."<<endl;
    else cout<<"Station Class member GetDistance not working properly."<<endl;
    cout<<"Testing Equality operator : "<<endl;
    if(!(s1 == s2)) cout<<"Station Class overloaded equality operator working properly."<<endl;
    else cout<<"Station Class overloaded equality operator not working properly."<<endl;
    cout<<" +++++ Station class is working properly +++++ "<<endl;
    cout<<endl;
}