#include "Airplane.h"

using namespace std;

void Airplane::pilotDidPushedButton ( Buttons button) {
  
}

void Airplane::prepareForLiftOff() {

}


void Airplane::onLiftOff() {

}

void Airplane::onClimbing() {

}


void Airplane::isApproachingAirfield ( Airplane* yourPlane ) {

}

void Airplane::onTouchDown() {

}


BaseMessages Airplane::getResponseFor ( BaseMessages recieved ) {  
  return BaseMessages::kMessageReceived; // default for now
}

void Airplane::processMessage ( BaseMessages received ) {
  switch (received);
}

/*        orders delegation          */ 

void Airplane::followFlightPlan ( vector< string > flightPlan ) {
  if (this->getDelegate() != NULL) this->getDelegate()->followFlightPlan(flightPlan);
}

void Airplane::setFlightPlan ( vector< string > flightPlan ) {
  if (this->getDelegate() != NULL) this->getDelegate()->setFlightPlan(flightPlan);
}

string Airplane::getNextInstruction()  {
  if (this->getDelegate() != NULL) { this->getDelegate()->getNextInstruction(); }
  else { cout << " tuka ima pot i mizeriq " << endl; } // problem is clear here
}

void Airplane::startInstruction ( const string& order ) {
  if (this->getDelegate() != NULL) this->getDelegate()->startInstruction(order);
}

void Airplane::abortInstruction() {
  if (this->getDelegate() != NULL) this->getDelegate()->abortInstruction();
}


//

Airplane::Airplane ( const unsigned int& passangers, const unsigned int& pilots ) {

}

Airplane::Airplane() {

}

Airplane::~Airplane() {

}

