#ifndef BERTH_H
#define BERTH_H

#include "BookingClasses.h"

#include <iostream> 
using namespace std;

class Berth : public BookingClasses{
protected:
public:
	bool IsSitting() const{
    return false;
}
};

#endif // BERTH_H