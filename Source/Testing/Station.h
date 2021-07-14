#ifndef STATION_H
#define STATION_H

#include <iostream>
#include <vector>
using namespace std;

// Station class

class Station{
    string name_;       // Name of Station of type string
public:
    Station(string name = "Mumbai");        // Default constructor
    Station(const Station &s);      // Copy constructor
    ~Station();         // Destructor 
    string GetName() const;         // Returns the name of the station 
    int GetDistance(const Station &s) const;        // Takes a constant Station reference as argument and returns the distance between them
    Station& operator=(const Station &s);       // Takes a constant Station reference as argument and assign the new value to current station (same as station passed in arguments)
    friend bool operator==(const Station &s1, const Station &s2);       // Returns true if both stations are same otherwise false
    friend ostream& operator<<(ostream& os, const Station &s);      // Takes a constant Station reference and an ostream reference as arguments and prints its name 
    static vector<pair< pair<Station, Station>, int> > sDistanceStations;       // Vector containing the distance between every pair of stations as pair of pairs 
    static void TestStation();      // Provides scenarios for unit testing
};

#endif