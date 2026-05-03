#pragma once
#include "Worker.h"

enum Positions{ MLODSZY_SPECJALISTA, SPECJALISTA, STARSZY_SPECJALISTA };

class Admin: public Worker
{
public:

	Admin( string Name, int Age, double Salary, int Seniority, Positions Position );

	void setPosition( Positions newPosition );
	Positions getPosition() const;

	virtual void printInfo();

	virtual double calcBrutto() const;
	virtual double calcNetto() const;
	virtual void calcSalary() const;

private:
	Positions m_Position;

};

inline void Admin::setPosition( Positions newPosition )
{
	m_Position = newPosition;
}

inline Positions Admin::getPosition() const
{
	return m_Position;
}
