#include "Admin.h"

const char* positionToString( Positions p )
{
	switch( p )
	{
	case MLODSZY_SPECJALISTA:  return "mlodszy specjalista";
	case SPECJALISTA:          return "specjalista";
	case STARSZY_SPECJALISTA:  return "starszy specjalista";
	}
	return "";
}

Admin::Admin( string Name, int Age, double Salary, int Seniority, Positions Position ):Worker( Name, Age, Salary, Seniority )
{
	setPosition( Position );
}

void Admin::printInfo()
{
	cout << getName() << " " << getAge() << " " << positionToString(getPosition()) << endl;
}


double Admin::calcBrutto( ) const{
	return getSalary() * calcSeniorityBonus();
}

double Admin::calcNetto() const{
	return calcBrutto() - calcTax( calcBrutto(), DEDUCTIBLE_EXPENSES );
}

void Admin::calcSalary() const{
	cout << "Podstawa: " << getSalary() << " Brutto: " << calcBrutto() << " Podatek: " << calcTax( calcBrutto(), DEDUCTIBLE_EXPENSES ) << " Netto: " << calcNetto() << endl;
}



