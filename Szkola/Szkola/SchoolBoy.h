#pragma once
#include "Pupil.h"
class SchoolBoy: public Pupil
{
public:
	SchoolBoy( string Name, int Age, string ClassName );

	virtual void printOutfit();
};

