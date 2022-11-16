/**
 * @file Supervisor.h
 * @author Ethan Buchanan
 * @date 2022-11-15
 * @brief Supervisor class implementation
 * 
 * Derived from EMployee class
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"

class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * Prints out supervisor info
 *
 * @pre 
 * @return void 
 * @post Prints out supervisor info
 * 
 */
  void print();

/**
 * Calculates pay of the supervisor
 *
 * @pre 
 * @return double Pay of supervisor
 * @post THe supervisor's pay has been calcualated
 * 
 */
  double calculatePay();

/**
 * default constructor for the supervisor
 *
 * @pre 
 * @post Sets values to be -1
 * 
 */
  Supervisor();

/**
 * Sets vaues of supervisor based on parameters
 *
 * @param int ID ID
 * @param int years years worked
 * @param double hourlyRate hourly rate
 * @param float hoursWorked hours wrked
 * @param int numSupervised number of empyeees supervised
 * @pre 
 * @post Values have been set to parameters
 * 
 */
Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H
