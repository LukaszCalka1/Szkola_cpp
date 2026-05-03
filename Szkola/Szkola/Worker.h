#pragma once
#include "Person.h"

#define STANDARD_DEDUCTION 556.02
#define DEDUCTIBLE_EXPENSES 111.25
#define TAX_RATE 18

class Worker: public Person
{
public:
	Worker( string Name, int Age, double Salary = 0, int Seniority = 0 );
	Worker( const Worker& w );
	virtual ~Worker();

	void setSalary( double newSalary );
	double getSalary() const;

	void setSeniority( int newSeniority );
	int getSeniority() const;

	virtual void printInfo() { throw SzkolaException( INVALID_USE_ERROR ); }

	virtual void calcSalary() const { throw SzkolaException( INVALID_USE_ERROR ); }
	virtual double calcBrutto() const { throw SzkolaException( INVALID_USE_ERROR ); }
	virtual double calcNetto() const { throw SzkolaException( INVALID_USE_ERROR ); }
	
	double calcTax( double brutto, double expenses ) const;

	double calcSeniorityBonus() const;


	//tax ma byæ z parametrem burtto i kwota uzysku, dla admina wywo³ywane raz dla teacher dwa i smuwowane 

	//licz podatek, brutto, netto, dodatek sta¿owy, i salary te¿???

private:
	double m_Salary;  //pensja brutto
	int m_Seniority;

};

inline void Worker::setSalary( double newSalary )
{
	m_Salary = newSalary;
}

inline double Worker::getSalary() const
{
	return m_Salary;
}

inline void Worker::setSeniority( int newSeniority )
{
	m_Seniority = newSeniority;
}

inline int Worker::getSeniority() const
{
	return m_Seniority;
}


