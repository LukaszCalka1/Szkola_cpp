#include "Worker.h"

Worker::Worker( string Name, int Age, double Salary, int Seniority ):Person( Name, Age )
{
	setSalary( Salary );
	setSeniority( Seniority );


}

Worker::Worker( const Worker& w )
{
	*this = w;
}

Worker::~Worker()
{
}

double Worker::calcTax( double brutto, double expenses ) const
{
	double tax = ( brutto - expenses ) * ( TAX_RATE * 0.01 ) - ( STANDARD_DEDUCTION / 12 );
	if( tax < 0 ) return 0;
	return tax;
}

double Worker::calcSeniorityBonus() const
{
	if( getSeniority() >= 5 ){
		if( getSeniority() >= 20 ){
			return 1.2;
		}
		return ( 1 + getSeniority() * 0.01 );
	}
	return 1;
}



