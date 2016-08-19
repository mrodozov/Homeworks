#ifndef BASE_FLIGHT_CONTROL_H
#define BASE_FLIGHT_CONTROL_H

#include "Airplane.h"

class BaseFlightControl : public BaseCommunications {
  
private:
  
  BaseAirplane * plane_;
  
protected:  
  
  virtual void prepareForFlight(BaseFlightControl * controlTower);
  virtual void liftingOff(BaseFlightControl * controlTower);
  virtual void planeIsFlying(BaseFlightControl * controlTower);
  virtual void preparingToLand(BaseFlightControl * controlTower);
  virtual void planehasLanded(BaseFlightControl * controlTower);
  //   
public:
  virtual void startFlight( BaseFlightControl * controlTower  );
  
  virtual void setPlane(BaseAirplane * plane) {this->plane_ = plane; }
  
  virtual BaseAirplane * getPlane() {return this->plane_;}
  
  // comm
  virtual BaseMessages getResponseFor(BaseMessages recieved);
  virtual void processMessage(BaseMessages received);
  
  BaseFlightControl();
  ~BaseFlightControl();
  
};

#endif