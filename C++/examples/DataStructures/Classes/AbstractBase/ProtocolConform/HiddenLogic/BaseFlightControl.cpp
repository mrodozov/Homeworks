#include "BaseFlightControl.h"

void BaseFlightControl::prepareForFlight ( BaseFlightControl * controlTower ) {
  
}

void BaseFlightControl::liftingOff ( BaseFlightControl * controlTower ) {
  
}

void BaseFlightControl::planeIsFlying ( BaseFlightControl * controlTower ) {
  
}

void BaseFlightControl::preparingToLand ( BaseFlightControl * controlTower ) {
  
}

void BaseFlightControl::planehasLanded ( BaseFlightControl * controlTower ) {
  
}

void BaseFlightControl::startFlight ( BaseFlightControl * controlTower) {
  //cout << " flight started base control " << endl;
  // Airplane * p = this->getPlane();
  this->prepareForFlight(controlTower);
  this->liftingOff(controlTower);
  this->planeIsFlying(controlTower);
  this->preparingToLand(controlTower);
  this->planehasLanded(controlTower);
}



BaseMessages BaseFlightControl::getResponseFor ( BaseMessages recieved ) {
  return kMessageReceived; // lol, this is the default
}

void BaseFlightControl::processMessage ( BaseMessages received ) {
  switch (received);
}

BaseFlightControl::BaseFlightControl() {
  
}


BaseFlightControl::~BaseFlightControl() {
  //delete this->plane_;
}
