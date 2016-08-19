#include "FlightControl.h"

using namespace std;

void FlightControl::prepareForFlight ( FlightControl * controlTower ) {
  cout << " prep for flight " << endl;
  //this->getPlane()->fireRocket();
}

void FlightControl::liftingOff ( FlightControl * controlTower ) {
  cout << " lift off " << endl;
  //this->getPlane()->fireRocket();
}

void FlightControl::planeIsFlying ( FlightControl * controlTower ) {
  cout << " flying " << endl;
  //this->getPlane()->fireRocket();
}

void FlightControl::preparingToLand ( FlightControl * controlTower ) {
  cout << " prep for landing " << endl;
  //this->getPlane()->fireRocket();
}

void FlightControl::planehasLanded ( FlightControl * controlTower ) {
  cout << " landed " << endl;
}


/**/


FlightControl::FlightControl() {
  
  //this->getPlane()->setDelegate(this);
  this->delegate_ = this;
}


/**/

void FlightControl::setDelegateForPlane() {
  //this->getJetFigter()->setDelegate(this->delegate_);
  this->getJetFigter()->setDelegate(this);
}



/* base plane delegate methods */


void FlightControl::setFlightPlan ( vector< string > flightPlan ) {
  this->setFlightPlan(flightPlan);
}

string FlightControl::getNextInstruction() {
  cout <<  " next instructions here " << endl;
  return "trololo";
}

void FlightControl::followFlightPlan ( vector< string > flightPlan ) {

}

void FlightControl::startInstruction ( const string& order ) {

}

void FlightControl::abortInstruction() {
  
}
