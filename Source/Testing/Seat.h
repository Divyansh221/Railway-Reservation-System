#ifndef SEAT_H
#define SEAT_H

#include "BookingClasses.h"

#include <iostream> 
using namespace std;

class Seat : public BookingClasses{
protected:
public:
	bool IsSitting() const{
    	return true;
	}
};

#endif