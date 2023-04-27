#include <iostream>
#include "Employee.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
//#include "ReportGenerator.h"

//**********************************************************************
// Function:    main
//
// Description:	A ReportGenerator generates report information for
//              both Salaried and Hourly employees. This generator uses:
//              1. Polymorphism
//              2. Dynamic memory
//              3. Constructor/Destructor for allocating/deallocating
//                  memory
//              4. vector<Employee *>
//
// Parameters:	none
//
// Returned:		exit status
//**********************************************************************

enum class Options : char {
  MONTHLY = 'M', YEARLY = 'Y',
  EMPLOYEE_HEADCOUNT = 'E', QUIT = 'Q'
};

Options getMenuOption ();

int main () {
  const std::string EMPLOYEES_FILE_NAME = "Employees.txt";
  Options cOption;

  do {
    std::cout << "Company Report Generator" << std::endl << std::endl;
    cOption = getMenuOption ();


  } while (cOption != Options::QUIT);

  return EXIT_SUCCESS;
}

Options getMenuOption () {
  char option;

  std::cout << "E)mployee Headcount" << std::endl
    << "M)onthly Salary Totals" << std::endl
    << "Y)early Salary Totals" << std::endl
    << "Q)uit" << std::endl << std::endl
    << "Selection: ";
  std::cin >> option;

  return static_cast<Options> (option);
}