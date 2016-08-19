#include "JetFighter.h"

using namespace std;

void JetFighterPlane::fireRocket() {
  cout << "piu piu" << endl;
}

//string JetFighterPlane::getNextInstruction() { Airplane::getNextInstruction(); }

JetFighterPlane::JetFighterPlane() {
  
}

JetFighterPlane::JetFighterPlane ( const unsigned int& passangers, const unsigned int& pilots ) : Airplane ( passangers, pilots ) {

}
