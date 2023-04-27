//********************************************************************** 
// File name:	 HourlyEmployee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************

#include <iostream>
#include <string>
#include "Employee.h"
#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee (const std::string &rcName,
	const std::string &rcSSN, double wageRate, double hoursWorked) :
	Employee (rcName, rcSSN), mWageRate (wageRate),
	mHoursWorked (hoursWorked) {
}

HourlyEmployee::HourlyEmployee (const HourlyEmployee &rcHourlyEmployee) {
	*this = rcHourlyEmployee;
}

HourlyEmployee::~HourlyEmployee () {

}

double HourlyEmployee::getMonthlyPay () const {
	return mWageRate * mHoursWorked;
}

void HourlyEmployee::addWorkedHours (double additionalHours) {
	mHoursWorked += additionalHours;
}

void HourlyEmployee::print (std::ostream &rcOut) const {
	Employee::print (rcOut);
	rcOut << "Wage: " << mWageRate << " HoursWorked: " << mHoursWorked
		<< " Pay: " << getMonthlyPay ();
}

bool HourlyEmployee::read (std::istream &rcIn) {
	bool bCompletedRead = false;

	if (Employee::read (rcIn)) {
		if (rcIn >> mWageRate >> mHoursWorked) {
			bCompletedRead = true;
		}
	}

	return bCompletedRead;
}