#include "manager.h"

Manager::Manager(string theName,
                 float thePayRate,
                 bool isSalaried)
  : Employee(theName, thePayRate)
{
  salaried = isSalaried;
}

bool Manager::getSalaried() 
{
  return salaried;
}

float Manager::pay(float hoursWorked) 
{
  if (salaried)
    return this->getPayRate();
  /* else */
  return Employee::pay(hoursWorked);
}

void Manager::setSalaried(bool isSalaried) {
  salaried = isSalaried;
}
