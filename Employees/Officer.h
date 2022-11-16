#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"

class Officer : public Employee {
 private:
  double evilness;
 public:

/**
 * PRints out OFficer information
 *
 * @pre 
 * @return void 
 * @post Officer information is printed out
 * 
 */
  void print();

/**
 * Calculates pay for an officer
 *
 * @pre 
 * @return double Returns his pay
 * @post 
 * 
 */
  double calculatePay();

/**
 * Sets OFficer values to default value
 *
 * @pre 
 * @post Officer info is set to -1
 * 
 */
  Officer();

/**
 * Sets Officer infro from parameters
 *
 * @param int ID Name
 * @param int years Years worked
 * @param double hourlyRate HOurly pay
 * @param float hoursWorked Hours worked
 * @param double evilness Evilness value
 * @pre 
 * @post Values set to parameters
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H
