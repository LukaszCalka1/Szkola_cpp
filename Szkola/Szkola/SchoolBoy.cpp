#include "SchoolBoy.h"

SchoolBoy::SchoolBoy( string Name, int Age, string ClassName ):Pupil( Name, Age, ClassName )
{
	m_ID = "M_" + m_ID;
}

void SchoolBoy::printOutfit()
{
	cout << "Biala koszula, szkolny krawat i szkolna marynarka, czarne lub granatowe spodnie, polbuty";
}