#ifndef CHARACTER_H
#define CHARACTER_H

#include "main.h"

class Character
{
public:
	// attribute variables
	int ST, DX, IQ, HT, HP, Will, Per, FP, basic_lift;

	// attribute cost variables
	int ST_Cost, DX_Cost, IQ_Cost, HT_Cost, HP_Cost, Will_Cost, Per_Cost, FP_Cost;

	Character();
	~Character();
	int totalPoints();
	void UpdateBasicLift();
};

#endif // !CHARACTER_H

