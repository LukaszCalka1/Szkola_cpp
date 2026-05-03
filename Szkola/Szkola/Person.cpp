#include "Person.h"

Person::Person( string Name, int Age )
{
	SetPerson( Name, Age );
}

Person::Person( const Person& p )
{
	*this = p;
}

Person::~Person()
{
}
