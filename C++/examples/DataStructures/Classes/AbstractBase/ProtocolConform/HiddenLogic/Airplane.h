#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "BasePlane.h"
#include "BaseCommunications.h"
#include "BaseButtons.h"
#include <vector>

using namespace std;

class BaseAirplane {
  bool isPlane=true;
  virtual bool isItPlane() = 0;
  // just need base for Airplane
private:
};

class Airplane : public BaseCommunications , public BaseAirplane {
  
private:
  
  virtual bool isItPlane() { return true;} // 
  unsigned totalPassangers=0;
  unsigned pilots=0;
  BasePlaneInstructionsProtocol * delegate_;
  
protected:
  
  void setPassangers(const unsigned & p){ this->totalPassangers = p;}  
  void setPilots(const unsigned & plts){ this->pilots = plts; }  
  
public:
      
  virtual void setCrewAndPassangers(const unsigned & passangers, const unsigned & pilots){ this->setPassangers(passangers); this->setPilots(pilots); }
  unsigned getPassangers() const { return this->totalPassangers; }
  unsigned getPilots() const { return this->pilots; }
  
  /*******************************/
  
  /* prepare for flight methods */  
  
  virtual void prepareForLiftOff();
  
  /* take off methods */
  
  virtual void onLiftOff();  
  
  virtual void onClimbing();
  
  /* in air methods */  
    
  
  /* prepare for landing methods */
  
  virtual void isApproachingAirfield(Airplane * yourPlane);
  
  /* landing methods */
  
  virtual void onTouchDown();  
    
  /* all the rest */
  
  /**
   * 
   * 
   * 
   */
  
  /* Communications and msg responses */
  
  virtual BaseMessages getResponseFor(BaseMessages recieved)  ;
  
  virtual void processMessage(BaseMessages received) ;
  
  /* Delegate set get */
  
  virtual void setDelegate(BasePlaneInstructionsProtocol * delegate) { this->delegate_ = delegate;}
  virtual BasePlaneInstructionsProtocol * getDelegate() { return this->delegate_; }
  
  /* Orders delegation  */
  
  virtual string getNextInstruction() ;
  virtual void startInstruction(const string & order) ;
  virtual void abortInstruction() ;
  virtual void setFlightPlan(vector<string> flightPlan) ; // to delegate
  virtual void followFlightPlan(vector<string> flightPlan) ; // to delegate
  
  /*  */
  
  virtual void pilotDidPushedButton(Buttons button);
  
  // virtual void fuselageGotDamaged();
  // virtual void planeHasCrashed(Airplane * yourPlane);
  
  Airplane();
  Airplane(const unsigned & passangers, const unsigned & pilots);
  ~Airplane();
  
};

#endif