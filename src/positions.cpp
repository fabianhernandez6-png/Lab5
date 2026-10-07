#include "Position.hpp"

Position::Position(string pCode, int rank, double salary, bool availability, bool jobType){
    setPositionCode(pCode);
    setRank(rank);
    setSalary(salary);
    setAvailability(availability);
    setFullTime(jobType);
}

// ! Getters
string Position::getPositionCode() { return positionCode; }
int Position::getRank() { return reqRank; }
double Position::getSalary() { return hourlySalary; }
bool Position::isAvailable() { return available; }
bool Position::isFullTime() { return jobType; }

// ! Setters
void Position::setPositionCode(string positionCode) { this->positionCode = positionCode; }
void Position::setRank(int reqRank) { this->reqRank = reqRank; }
void Position::setSalary(double hSalary) { this->hourlySalary = hSalary; }
void Position::setAvailability(bool available) { this->available = available; }
void Position::setFullTime(bool fulltime) { this->jobType = fulltime; }

 /**
     * Calculates and returns the average yearly salary for a position.
     *
     * The calculation depends on the type of job:
     *  - If the position is part-time, assume 20 working hours per week.
     *  - If the position is full-time, assume 40 working hours per week.
     *
     * Use the following formula to calculate the yearly salary:
     *   yearlySalary = hourlySalary * hoursPerWeek * 4.5 * 12
     *
     * Implement this method using if/else statements.
     *
     * @return The calculated yearly salary.
     */
double Position::getYearlySalary(){
    //Code [Use If/Else]
    return 0;
}