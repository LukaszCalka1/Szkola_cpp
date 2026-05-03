#pragma once
#include <iostream>
#include "SzkolaException.h"
#include <string>
using namespace std;

enum Subjects{ POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI };
#define MAXSUBJECTS NIEMIECKI+1


class Person
{
public:

	Person( string Name="", int Age=0);
	Person( const Person& p );
	virtual ~Person();

	Person& operator = ( const Person& p ) =default;

	string getName() const;
	int getAge() const;

	void SetName( string newName );
	void SetAge( int newAge );
	void SetPerson( string newName, int newAge );




private:
	string m_Name;
	int m_Age;

};

inline string Person::getName() const
{
	return m_Name;
}

inline int Person::getAge() const
{
	return m_Age;
}

inline void Person::SetName( string newName )
{
	m_Name = newName;
}

inline void Person::SetAge( int newAge )
{
	m_Age = newAge;
}

inline void Person::SetPerson( string newName, int newAge )
{
	SetName( newName );
	SetAge( newAge );
}
