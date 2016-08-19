#include "supervisior.h"

Supervisior::Supervisior(string theName,float thePayRate, bool isSalaried)  : Manager(theName, thePayRate, isSalaried)
{
  this->setSalaried(isSalaried);// = isSalaried;
}

void Supervisior::setDept (string theDept){
  department = theDept;
}


string Supervisior::getDept() {
  return department;
}
