#ifndef TIER0_H
#define TIER0_H

#include <iostream> 
#include "Seat.h"
using namespace std;

class Tier0 : public Seat{		// Inherited from class Seat
protected:						// Third level of hierarchy
public:
	int GetTier() const{		// Always returns integer value 0 (GetTier override)
    	return 0;
	}
};

#endif