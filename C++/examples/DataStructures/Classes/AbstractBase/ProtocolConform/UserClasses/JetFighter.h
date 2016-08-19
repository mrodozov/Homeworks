#ifndef JET_FIGHTER_H
#define JET_FIGHTER_H


#include "../Interfaces/JetFighterInterface.h"
#include "../HiddenLogic/Airplane.h"


class JetFighterPlane : public Airplane, public JetFighter {
  
private:
    
public:
  
  /* BasePlane specific */
  
  /* Airplane specific */
  
  /* JetFighter specific */
  
  virtual void fireRocket();
  //virtual string getNextInstruction();
  
  
  
  JetFighterPlane ( const unsigned int& passangers, const unsigned int& pilots );
  JetFighterPlane();
  
  
};

#endif