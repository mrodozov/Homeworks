
#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public:
  Employee(string theName, float thePayRate);
  
  void setName(string );
  void setPayRate(float );

  string getName() ;
  float getPayRate() ;

  float pay(float hoursWorked) ;

protected:
  
private:
  string name;
  float payRate;
};

#endif /* not defined _EMPLOYEE_H */
