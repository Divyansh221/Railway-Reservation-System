#ifndef TIER2_H
#define TIER2_H

#include "Berth.h"

class Tier2 : public Berth{		// Inherited from class Berth
protected:						// Third level of hierarchy
public:
	int GetTier() const{		// Always returns integer value 2 (GetTier override)
    	return 2;
	}
};

#endif