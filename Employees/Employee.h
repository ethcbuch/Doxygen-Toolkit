/**
 * @file Employee.h
 * @author Ethan Buchanan
 * @date 2022-11-15
 * @brief Class defintions for the Employee class
 * 
 * Employee class definitions all you need to know
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
 private:
  int ID; //employee ID
  int years;
  
 protected:
  double hourlyRate;
  float hoursWorked;
 public:
/**
 * print function for the Employee class
 * 
 * @return virtual Will be overwritten by derived classes
 * @post Prints out all information for an employee
 * 
 */
  virtual void print();

/**
 * Caluclates the pay for an employee
 * 
 * @return virtual Can be overwritten by derived class
 * @post The pay has been calculated
 * 
 */
  virtual double calculatePay();

/**
 * Adds the total years that an employee has worked
 *
 * @pre ??
 * @return void 
 * @post Prints years worked at company
 * 
 */
  void anniversary();

/**
 * Sets default values for employee
 *
 * @pre 
 * @post Values have beeen set to -1
 * 
 */
  Employee();

/**
 * Sets values from passed parameters
 *
 * @param int ID Employee nID
 * @param int years YEars worked
 * @param double hourlyRate Hourly pay
 * @param float hoursWorked Hours worked
 * @pre 
 * @post Values have been set to equal parameters
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H
