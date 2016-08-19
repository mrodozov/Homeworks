#include "supervisior.h"

Supervisior::Supervisior(string theName,
                 float thePayRate,
                 bool isSalaried)
  : Manager(theName, thePayRate, isSalaried)
{
  salaried = isSalaried;
}

void Supervisior::setDept (string theDept){
  department = theDept;
}


string Supervisior::getDept() {
  return department;
}
