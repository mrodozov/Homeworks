#include <string>
#include <iostream>
#include "HiddenLogic/Application.h"
#include "UserClasses/FlightControl.h"

using namespace std;

int main (){
  
  //Application * app = new Application();
  //app->Run();
  
  JetFighterPlane * fighter = new JetFighterPlane;
  FlightControl* ctrl_two = new FlightControl();
    
  ctrl_two->setPlane(fighter);
  //ctrl_two->getJetFigter()->setDelegate(ctrl_two);
  ctrl_two->getJetFigter()->fireRocket();  
  //ctrl_two->getNextInstruction();
  ctrl_two->setDelegateForPlane();
  cout << fighter->getDelegate() << endl;
  cout << ctrl_two->getDelegate() << endl;
  fighter->getDelegate()->getNextInstruction();
  //ctrl_two->getJetFigter()->getNextInstruction();
  
  // check with plane only
  Airplane * pl = new Airplane;
  pl->setDelegate(ctrl_two->getDelegate());
  pl->getNextInstruction(); // and so, it's working like this, wondering why 
  fighter->setDelegate(ctrl_two->getDelegate());
  dynamic_cast<Airplane*>(fighter)->getNextInstruction();
  
  // NOW WE ARE TALKIN !!!
  
  
  return 0;
}