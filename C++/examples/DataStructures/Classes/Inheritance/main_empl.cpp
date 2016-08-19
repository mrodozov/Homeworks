#include <string>
#include <iostream>
#include "supervisior.h"

using namespace std;


/**
 * Покрити примери:
 * 1. Наследяване
 * 2. Капсулиране
 * 3. Ниво на видимост на методите (private public protected)
 * 4. Multiple inheritance
 * 5. Header guards & preproc directives
 * 6. makefile basics
 * 
 */

int main (){

  Employee Emp("Mincho Praznikov",200); ;
  Manager Mngr("blabla",0.2,true);
  Supervisior Sup("lalala",0.3,true);
    
  cout << Emp.getPayRate() << endl;
  cout << Mngr.getPayRate() << endl;
  cout << Sup.getPayRate() << endl;
  
  
  return 0;
}
