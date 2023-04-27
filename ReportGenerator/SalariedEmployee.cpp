//********************************************************************** 
// File name:	 SalariedEmployee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************

#include <iostream>
#include <string>
#include "SalariedEmployee.h"
#include "Employee.h"

SalariedEmployee::SalariedEmployee (const std::string &rcName,
	const std::string &rcSSN, double salary) :
	Employee (rcName, rcSSN), mYearlySalary (salary) {
}


SalariedEmployee::SalariedEmployee (const SalariedEmployee
	&rcSalariedEmployee) {
	*this = rcSalariedEmployee;
}

SalariedEmployee::~SalariedEmployee () {

}

double SalariedEmployee::getMonthlyPay () const {
	const double MONTHS_IN_YEAR = 12;

	return mYearlySalary / MONTHS_IN_YEAR;
}

void SalariedEmployee::print (std::ostream &rcOut) const {

	Employee::print (rcOut);

	rcOut << " Pay: " << getMonthlyPay ();
}


bool SalariedEmployee::read (std::istream &rcIn) {
	bool bCompletedRead = false;

	if (Employee::read (rcIn)) {
		if (rcIn >> mYearlySalary) {
			bCompletedRead = true;
		}
	}

	return bCompletedRead;
}