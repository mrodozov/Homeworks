#include "JetFighter.h"

using namespace std;

void JetFighterPlane::fireRocket() {
  cout << "piu piu" << endl;
}

// string JetFighterPlane::getNextInstruction() { this->getDelegate()->getNextInstruction(); }

JetFighterPlane::JetFighterPlane() {
  
}

JetFighterPlane::JetFighterPlane ( const unsigned int& passangers, const unsigned int& pilots ) : Airplane ( passangers, pilots ) {

}

// void JetFighterPlane::setDelegate ( BasePlaneInstructionsProtocol* d ) {
//     Airplane::setDelegate ( d );
// }
