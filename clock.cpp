#include "clock.h"
// 11 member functions, i.e. methods  -  NEED TO BE WRITTEN
//   Below:  5 methods are written
//        the other 6 are function stubs and have only a shell


int  Clock::getMinutes(void) const
{
    return minutes;
}

bool Clock::getChimeOnHalfHour(void)   const
{
	return shouldChimeOnHalfHour;
}



void Clock::setMinutes(int m )
{
	if ( m >= 0 && m <= 59 )
		minutes = m;
	else
		minutes = 0;
}

void Clock::setChimeOnHalfHour(bool v )
{
	shouldChimeOnHalfHour = v;
}

string Clock::chimeOnHalfHour(void) const
{
    if ( getChimeOnHalfHour() && getMinutes() == 30 )
		return "ding";
	else
		return "";
}

// STUDENTS - COMPLETE THE CODE FOR THE FOLLOWING 6 MEMBER FUNCTIONS

int  Clock::getHours(void)   const
{
	return -1;  // DUMMY CODE - REPLACE
}

bool Clock::getChimeOnHour(void)       const
{
	return false;  // DUMMY CODE - REPLACE


}

void Clock::setHours(int h)
{
	// FUNCTION STUB
}

void Clock::setChimeOnHour(bool v)
{
	// FUNCTION STUB
}

void Clock::tick(void)
{
	// time goes up 1 minute
	// however when the minute is 59, it changes to 0
	// and the hour is changed
	//     if the hour is not 23, the hour goes up by 1
	//     otherwise the hour resets to 0
	//  need to consider the cases:   
	//           59 minutes and any hour but 23
	//           59 minues and 23 hours

	// FUNCTION STUB


	return;
}

string Clock::chimeOnHour(void) const
{
// clock should chime the number of hours, from 1 to 12
//    use string concatenation to build the return value
//    see the example in the driver program

	return "answer";    // method stub - remove when you write the method

}




