#ifndef _MANAGER_H
#define _MANAGER_H

#include "employee.h"

class Manager : public Employee {
  
public:
  
  Manager(string theName,
          float thePayRate,
          bool isSalaried);
  
  bool getSalaried() ;
  void setSalaried(bool) ;
  
  float pay(float hoursWorked) ;
  
protected:

private:
  bool salaried;
};

#endif /* not defined _MANAGER_H */
