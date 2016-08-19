#include <string>
#include <iostream>
#include "HiddenLogic/Application.h"
#include "UserClasses/FlightControl.h"

using namespace std;

int main (){
  
  //Application * app = new Application();
  //app->Run();
  
  JetFighterPlane * fighter = new JetFighterPlane();
  FlightControl* ctrl_two = new FlightControl();
  //fighter->getDelegate()->delegate_;
  
  ctrl_two->setPlane(fighter);
  ctrl_two->getJetFigter()->setDelegate(ctrl_two);
  ctrl_two->getJetFigter()->fireRocket();  
  cout << fighter->getDelegate() << endl; // 
  cout << ctrl_two->getDelegate() << endl; //
  ctrl_two->getJetFigter()->getDelegate()->getNextInstruction(); // hover over, see that decl. place matters
  ctrl_two->getJetFigter()->getNextInstruction(); // 
  //fighter->getNextInstruction(); // dies
  ctrl_two->getJetFighterAsAirplain()->getDelegate()->getNextInstruction();
  // check with plane only
  cout << " " << endl;
  Airplane * pl = new Airplane;
  pl->setDelegate(ctrl_two->getDelegate());
  pl->getDelegate()->getNextInstruction();
  cout << pl->getDelegate() << endl;
  pl->getNextInstruction(); // and so, it's working like this, wondering why 
  //fighter->setDelegate(ctrl_two->getDelegate());
  //dynamic_cast<Airplane*>(fighter)->getNextInstruction();
  
  // NOW WE ARE TALKIN !!!
  
  
  
  
  return 0;
}