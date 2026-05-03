#include "SchoolGirl.h"

SchoolGirl::SchoolGirl( string Name, int Age, string ClassName ) :Pupil( Name, Age, ClassName )
{
	m_ID = "F_" + m_ID;
}

void SchoolGirl::printOutfit()
{
	cout << "Biala bluzka, szkolny krawat i szkolna marynarka, czarna lub granatowa spodnica, plaskie obowie";
}