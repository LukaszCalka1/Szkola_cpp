#include <iostream>

#include "SchoolBoy.h"
#include "SchoolGirl.h"
#include "Admin.h"
#include "Teacher.h"

void printAllPupils( Pupil* pupils[], int pupilsNo );
void printAllWorkers( Worker* workers[], int workersNo );
int compareSalary( const Worker** w1, const Worker** w2 );

int main()
{
    SchoolGirl g1( "Nowak Agnieszka", 17, "3A" );
    g1.setNote( POLSKI, 3.5 );
    g1.setNote( INFORMATYKA, 4.5 );
    g1.setNote( CHEMIA, 3.5 );
    g1.setNote( FIZYKA, 3.5 );
    g1.setNote( NIEMIECKI, 3.0);



    SchoolGirl g2( "Sobota Paulina", 18, "4B" );
    g2.setNote( POLSKI, 3.5 );
    g2.setNote( MATEMATYKA, 4.5 );
    g2.setNote( CHEMIA, 3.5 );
    g2.setNote( ANGIELSKI, 3.5 );


    SchoolGirl g3( "Kozub MAria", 17, "3A" );
    g3.setNote( POLSKI, 3.5 );
    g3.setNote( MATEMATYKA, 4.5 );
    g3.setNote( INFORMATYKA, 3.5 );
    g3.setNote( NIEMIECKI, 3.0 );


    SchoolBoy b1( "Kowalski Marcin", 17, "3B" );
    b1.setNote( POLSKI, 3.5 );
    b1.setNote( MATEMATYKA, 4.5 );
    b1.setNote( CHEMIA, 3.5 );


    SchoolBoy b2( "Pawelek Marcin", 18, "4B" );
    b2.setNote( POLSKI, 3.5 );
    b2.setNote( MATEMATYKA, 4.5 );
    b2.setNote( ANGIELSKI, 4 );


    Pupil* pupils[] = { &g1, &g2, &g3, &b1, &b2 };
    printAllPupils( pupils, sizeof( pupils ) / sizeof( Pupil* ) );
    cout << endl;


 
    Admin a1( "Kowalski Jan", 45, 4500.0, 10, SPECJALISTA );
    Admin a2( "Nowak Anna", 48, 5200.0, 15, STARSZY_SPECJALISTA );

  
    Teacher t1( "Zielinski Piotr", 50, 5000.0, 20, MATEMATYKA );
    Teacher t2( "Lewandowska Maria", 62, 4800.0, 18, FIZYKA, true, "3B");
    Teacher t3( "Wisniewska Katarzyna", 35, 4600.0, 2, ANGIELSKI );
    Teacher t4( "Kaczmarek Tomasz", 55, 5200.0, 25, INFORMATYKA, true, "4B" );
    Teacher t5( "Dabrowska Agnieszka", 40, 4900.0, 7, MATEMATYKA, true, "3A" );


    Worker* workers[] = { &a1, &a2, &t1, &t2, &t3, &t4, &t5, };
    printAllWorkers( workers, sizeof( workers ) / sizeof( Worker* ) );






    return 0;
}

void printAllPupils( Pupil* pupils[], int pupilsNo )
{
    for( int i = 0; i < pupilsNo; i++ )
    {
        pupils[i]->calcAve();
        pupils[i]->printPupil();
        cout << endl;
    }
}

void printAllWorkers( Worker* workers[], int workersNo )
{
    qsort( workers, workersNo, sizeof( Worker* ), ( int( * )( const void*, const void* ) ) compareSalary );

    for( int i = 0; i < workersNo; i++ )
    {
        workers[i]->printInfo();
        workers[i]->calcSalary();
        cout << endl;
    }
}

int compareSalary( const Worker** w1, const Worker** w2 )
{

    if( (*w1)->calcBrutto() < (*w2)->calcBrutto() )
        return -1;

    if( (*w1)->calcBrutto() > (*w2)->calcBrutto() )
        return 1;

    return 0;
}

