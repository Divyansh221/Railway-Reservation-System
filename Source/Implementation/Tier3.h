#ifndef TIER3_H
#define TIER3_H

#include "Berth.h"
	
class Tier3 : public Berth{			// Inherited from class Berth
protected:							// Third level of hierarchy
public:
	int GetTier() const{			// Always returns integer value 3 (GetTier override)
    	return 3;
	}
};

#endif