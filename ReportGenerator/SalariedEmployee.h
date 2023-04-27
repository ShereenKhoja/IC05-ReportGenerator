//********************************************************************** 
// File name:	 SalariedEmployee.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************
#pragma once

#include <string>
#include <iostream>
#include "Employee.h"


class SalariedEmployee : public Employee {
public:
  SalariedEmployee (const std::string &rcName = "", const std::string &rcSSN = "",
    double salary = 0);
  SalariedEmployee (const SalariedEmployee &rcSalariedEmployee);
  virtual ~SalariedEmployee ();

  virtual double getMonthlyPay () const; // total monthly pay amount

  virtual void print (std::ostream &rcOut) const override;
  virtual bool read (std::istream &rcIn) override;

private:
  double mYearlySalary;
};