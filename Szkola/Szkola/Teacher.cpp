#include "Teacher.h"

string subjectToString( Subjects s )
{
	switch( s )
	{
	case POLSKI:        return "jezyk polski";
	case MATEMATYKA:    return "matematyka";
	case FIZYKA:        return "fizyka";
	case CHEMIA:        return "chemia";
	case INFORMATYKA:   return "informatyka";
	case ANGIELSKI:     return "jezyk angielski";
	case NIEMIECKI:     return "jezyk niemiecki";
	}
	return "";
}

Teacher::Teacher( string Name, int Age, double Salary, int Seniority, Subjects Subject, bool ClassTutor, string ClassName ) :Worker(Name, Age, Salary, Seniority)
{
	setSubject( Subject );
	setClassTutor( ClassTutor );
	setClass( ClassName );
}

void Teacher::printInfo()
{
	cout << getName() << " " << getAge() << " " << subjectToString(getSubject()) << endl;
}

double  Teacher::calcBrutto() const{
	double brutto = getSalary() * calcSeniorityBonus();
	if( getClassTutor() ) brutto += 400;
	return brutto;
}

double  Teacher::calcNetto() const{
	return calcBrutto() - calcTax( calcBrutto(), 0.8 * calcBrutto() * 0.5 + DEDUCTIBLE_EXPENSES);
}

void Teacher::calcSalary() const{
	cout << "Podstawa: " << getSalary() << " Brutto: " << calcBrutto() << " Podatek: " << calcTax( calcBrutto(), 0.8 * calcBrutto() * 0.5 + DEDUCTIBLE_EXPENSES ) << " Netto: " << calcNetto() << endl;
}

