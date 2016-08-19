#include "employee.h"

Employee::Employee(string theName, float thePayRate)

{
  name = theName;
  payRate = thePayRate;

}

string Employee::getName() 
{
  return name;
}

float Employee::getPayRate() 
{
  return payRate;
}

float Employee::pay(float hoursWorked) 
{
  return hoursWorked * payRate;
}


void Employee::setName(string theName){
  name = theName;
}

void Employee::setPayRate(float thePayRate){
  payRate = thePayRate;
}

