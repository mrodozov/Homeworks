#ifndef _SUPERVISIOR_H
#define _SUPERVISIOR_H

#include "manager.h"

class Supervisior : public Manager
{

  public:
  Supervisior(string theName,
          float thePayRate,
          bool isSalaried);
  
  void setDept (string);
  string getDept() ;
  protected:
  string department;
  // dobavete promenliva na klasa ot tip pointer, za koyato se zadelq pamet v konstruktora
  string * nqkvaSiPromenliva;
  
};




#endif
