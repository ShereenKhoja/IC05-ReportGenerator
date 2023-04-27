# ryan2135IC10T-ReportGenerator

1. Create a class called ReportGenerator. This class is to be able to read an unknown number of Hourly and Salaried employees into a vector of Employee *. Dynamically allocate objects of the appropriate type to be placed into the vector.
2. The constructor accepts an istream reference. If the file is successfully opened, fill the vector with the employees found in the file. Remember that employees are of one of two forms:
<pre>
H Smith 123456789 22.5 40
S Jones 987654321 10000.00
</pre>
3. Add a destructor that cleans up the vector of dynamically allocated memory.
4. Add a function that will output the total number of employees in the company.
5. Add a function that will output the company’s total monthly payroll.
6. Add a function that will output the company's total yearly payroll. This will be an estimate as the monthly employees might work more or fewer hours.

Follow the UML diagram found in the lecture notes on Moodle.
