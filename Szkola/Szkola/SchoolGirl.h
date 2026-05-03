#pragma once
#include "Pupil.h"
class SchoolGirl: public Pupil
{
public:
	SchoolGirl( string Name, int Age, string ClassName );

	virtual void printOutfit();
};

