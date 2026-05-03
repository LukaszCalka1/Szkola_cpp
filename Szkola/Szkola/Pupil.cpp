#include "Pupil.h"

int Pupil::m_baseID = 10000;

Pupil::Pupil( string Name, int Age, string ClassName ):Person( Name, Age )
{
	setClassName( ClassName );
	m_ID = to_string( m_baseID );
	m_baseID++;
	clearNotes();

}

Pupil::Pupil( const Pupil& p )
{
	*this = p;
}

Pupil::~Pupil()
{
}

void Pupil::setNote( Subjects subject, double note )
{
	if( subject > NIEMIECKI || subject < POLSKI ){
		throw SzkolaException( INVALID_SUBCJECT_ERROR );
	}
	if( note < 2 || note>5 ){
		throw SzkolaException( NOTE_OUT_OF_RANGE_ERROR );
	}
	m_Notes[subject] = note;
}

void Pupil::clearNotes()
{
	memset( m_Notes, 0, MAXSUBJECTS * sizeof( double ) );
	m_Ave = 0;
}

double Pupil::calcAve()
{
	double sum = 0;
	int n = 0;
	for( int i = 0; i < MAXSUBJECTS; i++ ){
		if( m_Notes[i] > 1 ){
			sum += m_Notes[i];
			n++;
		}
	}
	return m_Ave = ( n )? sum / n : 0;
}

void Pupil::printPupil()
{
	cout << getID() << ' ' << getName() << " (" << getClassName() << ") " << getAge() << " " << getAve() << endl;
	cout << '\t'; printOutfit();
}
