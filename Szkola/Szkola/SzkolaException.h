#pragma once

typedef unsigned short USHORT;

#define OTHER_ERROR 0x01
#define INVALID_USE_ERROR 0x02
#define INVALID_SUBCJECT_ERROR 0x04
#define NOTE_OUT_OF_RANGE_ERROR 0x08

class SzkolaException
{
public:
	SzkolaException( USHORT mErr = OTHER_ERROR );
	const char* getReason() const;

private:
	USHORT mErrCode;

};


inline SzkolaException::SzkolaException( USHORT mErr )
{
	mErrCode = mErr;
}

inline const char* SzkolaException::getReason() const
{
	switch( mErrCode )
	{
	case INVALID_USE_ERROR: return "ERORR: Inavlid use of function !!!!\n";
	case INVALID_SUBCJECT_ERROR: return "ERROR: No such subjcect!!!!\n";
	case NOTE_OUT_OF_RANGE_ERROR: return "ERROR: Note must be 2-5!!!!\n";
	default: return "Other ERROR!!!";
	}
}


