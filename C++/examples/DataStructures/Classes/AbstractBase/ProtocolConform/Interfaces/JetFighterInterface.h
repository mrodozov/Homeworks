#ifndef JET_FIGHTER_INTERFACE_H
#define JET_FIGHTER_INTERFACE_H

/* jet fighter interface is concerned only with fighting abilities, it does not have  */

class JetFighter {
private:
  unsigned numberOfRockets;
  unsigned bulletsRemaining;
  
protected:
  // some fighting strategies
  
public:
  
  virtual void fireRocket()=0;
  
};

#endif