
#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public:
  Employee(string theName, float thePayRate);

  void setName(string );
  void setPayRate(float );

  string getName() const;
  float getPayRate() const;

  float pay(float hoursWorked) const;

protected:
  string name;
  float payRate;
};

#endif /* not defined _EMPLOYEE_H */
