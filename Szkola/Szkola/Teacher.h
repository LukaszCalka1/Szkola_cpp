#pragma once
#include "Worker.h"
class Teacher: public Worker
{
public:
	Teacher( string Name, int Age, double Salary, int Seniority, Subjects Subject, bool ClassTutor=false, string ClassName="");

	void setSubject( Subjects newSubject );
	Subjects getSubject() const;

	void setClassTutor( bool ClassTutor );
	bool getClassTutor() const;

	void setClass( string newClassName );
	string getClass() const;

	virtual void printInfo();

	virtual double calcBrutto() const;
	virtual double calcNetto() const;
	virtual void calcSalary() const;



private:

	Subjects m_subject;
	bool m_ClassTutor;
	string m_ClassName;

};

inline void Teacher::setSubject( Subjects newSubject )
{
	m_subject = newSubject;
}

inline Subjects Teacher::getSubject() const
{
	return m_subject;
}

inline void Teacher::setClassTutor( bool ClassTutor )
{
	m_ClassTutor = ClassTutor;
}

inline bool Teacher::getClassTutor() const
{
	return m_ClassTutor;
}

inline void Teacher::setClass( string newClassName )
{
	m_ClassName = newClassName;
}

inline string Teacher::getClass() const
{
	return m_ClassName;
}
