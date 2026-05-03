#pragma once
#include "Person.h"


class Pupil: public Person
{
public:
	Pupil( string Name, int Age, string ClassName );
	Pupil( const Pupil& p );
	virtual ~Pupil();

	void setClassName( string newClassName );
	string getClassName() const;

	string getID() const;

	void setNote( Subjects subject, double note );

	void clearNotes();

	double getAve() const;
	double calcAve();

	void printPupil();

	virtual void printOutfit() { throw SzkolaException(INVALID_USE_ERROR); }



protected:
	string m_ID;

private:
	string m_ClassName;
	double m_Ave;
	static int m_baseID;
	double m_Notes[MAXSUBJECTS];
};

inline void Pupil::setClassName( string newClassName )
{
	m_ClassName = newClassName;
}

inline string Pupil::getClassName() const
{
	return m_ClassName;
}

inline string Pupil::getID() const
{
	return m_ID;
}

inline double Pupil::getAve() const
{
	return m_Ave;
}