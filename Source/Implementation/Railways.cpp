#include "Railways.h"
#include "Station.h"

Railways *Railways::IndianRailways = NULL;
Railways :: Railways(){};

vector<Station> Railways :: sStations = {Station("Mumbai"), Station("Dehli"), Station("Banglore"), 
                                            Station("Kolkata"), Station("Chennai")};

vector<pair< pair<Station, Station>, int> > Railways :: sDistStations = {
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

int Railways :: GetDistance(const Station &s1, const Station &s2) const{
    string name1 = s1.GetName();
    string name2 = s2.GetName();
    vector<pair< pair<Station, Station>, int> >::iterator it;
    for(it = Railways::sDistStations.begin(); it < Railways::sDistStations.end(); ++it){
        if((*it).first.first.GetName() == name1 && (*it).first.second.GetName() == name2 || 
            (*it).first.first.GetName() == name2 && (*it).first.second.GetName() == name1){
            return (*it).second;
        }
    }
    return 0;
}

void Railways :: Print() const{
    cout<<"Printing IndianRailways info : "<<endl;
    cout<<"Printing all stations : "<<endl;
    vector<Station>::iterator it1;
    for(it1 = Railways::sStations.begin(); it1 < Railways::sStations.end(); ++it1){
        cout<<*it1<<endl;
    }
    cout<<"Printing distances b/w stations : "<<endl;
    vector<pair< pair<Station, Station>, int> >::iterator it2;
    for(it2 = Railways::sDistStations.begin(); it2 < Railways::sDistStations.end(); ++it2){
        cout<<(*it2).first.first<<" - "<<(*it2).first.second<<" : ";
        int distance = (*it2).second;
        cout<<distance<<endl;
    }
}

const Railways& Railways :: GetInstance(){ 
        if(!IndianRailways){
            IndianRailways = new Railways(); 
        }
        return *IndianRailways; 
}

void Railways :: TestRailways(){
    cout<<" +++++ Testing Railways class +++++ "<<endl;
    Station s1("Chennai"), s2("Mumbai");
    cout<<"Testing GetDistance : "<<endl;
    if(Railways::GetInstance().GetDistance(s1, s2) == 1338) cout<<"Railways Class member GetDistance working properly."<<endl;
    else cout<<"Railways Class member GetDistance not working properly."<<endl;
    cout<<" +++++ Railways class is working properly +++++ "<<endl;
    cout<<endl;
}