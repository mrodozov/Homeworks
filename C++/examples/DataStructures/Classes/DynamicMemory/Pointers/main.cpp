#include <string>
#include <iostream>
#include "supervisior.h"

using namespace std;

int main (){

  Employee * pointerToEmp ;
  Manager * pointerToMngr;
  Supervisior * sup;
  
  pointerToEmp = new Employee("Mincho Praznikov",200);
  cout << pointerToEmp->getPayRate() << endl;
  
  // losha praktika :)
  
  sup = new Supervisior("lalala",0.1,true);
  sup->setDept("boza");

  return 0;
}
