#ifndef RAILWAYS_H
#define RAILWAYS_H

#include "Station.h"

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Railways Class

class Railways { 
    static Railways *IndianRailways; 		// A singleton Railways as IndianRailways
    Railways();		// Private constructor
    static vector<Station> sStations;		// Vector of Stations
    static vector<pair< pair<Station, Station>, int> > sDistStations;		// Vector containing the distance between every pair of stations as pair of pairs
public:
    ~Railways() ;		// Destructor
    static const Railways& GetInstance();		// Return the constant reference of the constant instance of the class
    int GetDistance(const Station &s1, const Station &s2) const;		// Takes two constant Station reference as arguments and returns the distance between them as an integer
    void Print() const;		// Prints all details about the IndianRailways.
    static void TestRailways();		// Provides scenarios for unit testing
};

#endif