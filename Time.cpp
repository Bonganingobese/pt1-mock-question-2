#include "Time.h"
#include <iomanip>
#include <stdexcpt.h>
using namespace std;


Time::Time(int H,int M)
{
	set(H, M);
}


Time::~Time()
{
}
void Time::set(int H, int M)
{
	if (H < 24 && H>=0)
	{
		Hours = H;
	}
	else
	{
		throw out_of_range("Hours must be from 0-23");
	}
	if (M < 60 && M >= 0)
	{
		Minutes = M;
	}
	else
	{
		throw out_of_range("Hours must be from 0-59");
	}
}
void Time::get(static int H,static int M) const
{
	H = Hours;
	M = Minutes;
}
Time Time::operator++(int)
{
	Time temp = *this;
	increamentMinutes();
	return temp;

}
void Time::increamentMinutes()
{
	if (Hours >= 0 && Hours < 24)
	{
		if (Minutes >= 0 && Minutes != 59)
		{
			++Minutes;
		}
		else
		{
			throw out_of_range("SORRY CANT INCREAMENT");
		}
	}
	else
	{
		throw out_of_range("SORRY CANT INCREAMENT");
	}
}
 ostream &operator<<(ostream &output,const Time & t)
{
	output <<t.Hours << ":" << t.Minutes<<endl;
		return output;
}

