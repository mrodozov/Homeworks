#ifndef FLIGHT_CONTROL_H
#define FLIGHT_CONTROL_H

#include "../HiddenLogic/BaseFlightControl.h"
#include "JetFighter.h"

class FlightControl : public BaseFlightControl, public BasePlaneInstructionsProtocol {
  
protected:
  
  void prepareForFlight(FlightControl * controlTower);
  void liftingOff(FlightControl * controlTower);
  void planeIsFlying(FlightControl * controlTower);
  void preparingToLand(FlightControl * controlTower);
  
  
  void planehasLanded(FlightControl * controlTower);
public:
  
  //JetFighterPlane * getPlane() { return this->getPlane();}
  //void setPlane(JetFighterPlane * p) { this->setPlane(p); }
  JetFighterPlane * getJetFigter() { return dynamic_cast<JetFighterPlane*>(this->getPlane());}
  Airplane * getJetFighterAsAirplain () { return dynamic_cast<Airplane*>(this->getPlane()); }
  
  /* get set the delegate pointer */
  
  virtual void setDelegateForPlane();
  virtual BasePlaneInstructionsProtocol * getDelegate() { return this->delegate_; }
  
  /* base delegate methods */
  string getNextInstruction();
   void startInstruction(const string & order) ;
   void abortInstruction() ;
   void setFlightPlan(vector<string> flightPlan) ; // to delegate
   void followFlightPlan(vector<string> flightPlan) ; // to delegate
  
  FlightControl ();
  //FlightControl ( JetFighterPlane * plane);
  
};


#endif