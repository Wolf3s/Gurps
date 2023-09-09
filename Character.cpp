#include "Character.h"

//-----------------------------------------------------------------------------------------

Character::Character()
{
	ST = 10, DX = 10, IQ = 10, HT = 10, HP = 10, Will = 10, Per = 10, FP = 10, HP = 10, basic_lift = 20;
	ST_Cost = 10, DX_Cost = 20, IQ_Cost =20, HT_Cost = 10, HP_Cost = 2, Will_Cost = 5, Per_Cost = 5, FP_Cost = 3;
}

Character::~Character()
{
}

//-----------------------------------------------------------------------------------------

int Character::totalPoints()
{
    // calculation of attribute costs.
    ST_Cost =   (ST - 10) * 10;
    DX_Cost =   (DX - 10) * 20;
    IQ_Cost =   (IQ - 10) * 20;
    HT_Cost =   (HT - 10) * 10;
    HP_Cost =   (HP - ST) * 2;
    Will_Cost = (Will - IQ) * 5;
    Per_Cost =  (Per - IQ) * 5;
    FP_Cost =   (FP - HT) * 3;

    int total = ST_Cost + DX_Cost + IQ_Cost + HT_Cost + HP_Cost + Will_Cost + Per_Cost + FP_Cost;

	return total;
}

//-----------------------------------------------------------------------------------------

void Character::UpdateBasicLift()
{
    basic_lift = (ST * ST) / 5;
}