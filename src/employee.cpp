#include "Employee.hpp"

Employee::Employee(string fullName, double hourlySalary, int hoursWeekly, int years, bool status, int warnings){
    eFullName = fullName;
    eHourlySalary = hourlySalary;
    this->hoursWeekly = hoursWeekly;
    yearService = years;
    workStatus = status;
    this->warnings = warnings;
}
// ! Getters
string Employee::getFullName() { return eFullName; }
double Employee::getHourlySalary() { return eHourlySalary; }
int Employee::getHoursPerWeek() { return hoursWeekly; }
int Employee::getYearsOfService() { return yearService; }
bool Employee::getStatus() { return workStatus; }
int Employee::getWarnings() { return warnings; }
double Employee::getYearlySalary() { return eHourlySalary * hoursWeekly * 4.5 * 12; }

// ! Setters
void Employee::setFullName(string fullName) { eFullName = fullName; }
void Employee::setHourlySalary(double hourlySalary) { eHourlySalary = hourlySalary; }
void Employee::setHoursPerWeek(int hours) { hoursWeekly = hours; }
void Employee::setYearsOfService(int years) { yearService = years; }
void Employee::setStatus(bool status) { workStatus = status; }
void Employee::setWarnings(int warnings) { this->warnings = warnings; }

/**
 * Returns the seniority level of an employee (levels 0 to 3).
 * The seniority level is determined by the employee's years of service:
 *  - Level 3: 15 or more years of service
 *  - Level 2: More than 5 and less than 15 years of service
 *  - Level 1: More than 1 and up to 5 years of service
 *  - Level 0: 1 year of service or less
 *
 * Use if/else statements to implement this method.
 * @return The seniority level of the employee.
 */

int Employee::seniorityLevel(){
    //Code [Use If/Else]
    return -1;
}
