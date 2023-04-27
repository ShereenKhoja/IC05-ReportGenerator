//********************************************************************** 
// File name:	 HourlyEmployee.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************
#pragma once

#include <iostream>
#include <string>
#include "Employee.h"

class HourlyEmployee : public Employee {
public:
	HourlyEmployee (const std::string &rcName = "",
		const std::string &rcSSN = "", double wageRate = 0,
		double hoursWorked = 0);
	HourlyEmployee (const HourlyEmployee &rcHourlyEmployee);
	~HourlyEmployee ();

	virtual double getMonthlyPay () const; // total monthly pay amount
	void addWorkedHours (double additionalHours);

	virtual void print (std::ostream &rcOut) const override;
	virtual bool read (std::istream &rcIn) override;

private:
	double mWageRate;
	double mHoursWorked;
};